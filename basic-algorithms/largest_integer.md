# Largest Integer With Given Digit Sum

## Problem

Given two integers `n` and `s`, construct the largest possible `n`-digit integer whose digits have a sum equal to `s`.

If it is impossible to create such an integer, return `-1`.

## Examples

### Example 1

**Input:**

```text
n = 2, s = 9
```

**Output:**

```text
90
```

### Example 2

**Input:**

```text
n = 2, s = 19
```

**Output:**

```text
-1
```

Because the maximum possible digit sum for a 2-digit number is `9 + 9 = 18`.

## Approach

1. The maximum possible digit sum for `n` digits is `n × 9`.
2. If `s > n × 9`, it is impossible, so return `-1`.
3. Start constructing the number from the leftmost digit.
4. For each position, choose the largest possible digit, up to `9`.
5. Subtract the chosen digit from `s`.
6. Continue until all `n` digits are filled.

Choosing the largest possible digit at every position produces the largest integer.

## Code

```python
class Solution:
    def largestInteger(self, n: int, s: int) -> int:
        if n * 9 < s:
            return -1

        ans = 0

        for _ in range(n):
            digit = min(s, 9)
            ans = ans * 10 + digit
            s -= digit

        return ans
```

## Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(1)

## Result

The program constructs the largest possible `n`-digit integer with the required digit sum. If the required sum is greater than `9 × n`, it returns `-1`.

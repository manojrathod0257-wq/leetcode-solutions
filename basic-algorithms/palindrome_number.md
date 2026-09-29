# Palindrome Number

## Problem

Given an integer `x`, return `true` if `x` is a palindrome, and `false` otherwise.

A palindrome number reads the same backward as forward.

### Examples

* Input: `121` → Output: `true`
* Input: `-121` → Output: `false`
* Input: `123` → Output: `false`

## Approach

1. If the number is negative, return `false`.
2. Store the original number.
3. Reverse the digits of the number using a loop.
4. Compare the reversed number with the original number.
5. If both are equal, the number is a palindrome.

## Code

```python
class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False

        original = x
        reverse = 0

        while x > 0:
            digit = x % 10
            reverse = reverse * 10 + digit
            x //= 10

        return original == reverse
```

## Complexity

* **Time Complexity:** O(log x)
* **Space Complexity:** O(1)

## Result

The program correctly checks whether the given integer is a palindrome.

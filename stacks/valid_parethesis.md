# Valid Parentheses

## Problem

Given a string containing only the characters `(`, `)`, `{`, `}`, `[` and `]`, determine if the input string is valid.

A string is valid when:

* Every opening bracket has a matching closing bracket.
* Brackets close in the correct order.
* Every closing bracket has a corresponding opening bracket.

## Examples

**Example 1:**

```text
Input:  s = "()"
Output: true
```

**Example 2:**

```text
Input:  s = "()[]{}"
Output: true
```

**Example 3:**

```text
Input:  s = "(]"
Output: false
```

## Approach

1. Use a stack to store opening brackets.
2. When an opening bracket is found, push it onto the stack.
3. When a closing bracket is found, check whether it matches the top of the stack.
4. If it does not match, return `false`.
5. Remove the matching opening bracket from the stack.
6. At the end, the stack must be empty for the string to be valid.

## Code

```python
class Solution:
    def isValid(self, s: str) -> bool:
        stack = []

        pairs = {
            ')': '(',
            ']': '[',
            '}': '{'
        }

        for char in s:
            if char in '([{':
                stack.append(char)
            else:
                if not stack or stack[-1] != pairs[char]:
                    return False
                stack.pop()

        return len(stack) == 0
```

## Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(n)

## Result

The program uses a stack to check whether all brackets are properly opened and closed in the correct order.

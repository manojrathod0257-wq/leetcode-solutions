# Reverse a String

## Problem
Write a function that reverses a string in-place.

## Approach
Use two pointers:
- `left` starts from the beginning.
- `right` starts from the end.
- Swap the characters at `left` and `right`.
- Move both pointers toward the center.

## Test Cases

### Test Case 1
Input: `"hello"`
Output: `"olleh"`

### Test Case 2
Input: `"H"`
Output: `"H"`

## Complexity
Time Complexity: O(n)


## LeetCode Result
Accepted
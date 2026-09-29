# Min Stack

## Problem

Design a stack that supports the following operations in constant time:

* `push(val)` — Add an element to the stack.
* `pop()` — Remove the top element.
* `top()` — Return the top element.
* `getMin()` — Return the minimum element in the stack.

## Example

```text
push(-2)
push(0)
push(-3)

getMin() → -3

pop()

top() → 0

getMin() → -2
```

## Approach

Use two stacks:

1. `stack` stores all the elements.
2. `min_stack` keeps track of the minimum element at each stage.
3. During `push`, add the value to `min_stack` if it is smaller than or equal to the current minimum.
4. During `pop`, remove the value from `min_stack` if it is also the current minimum.
5. `getMin()` returns the top of `min_stack`.

This allows all operations to run in constant time.

## Code

```python
class MinStack:

    def __init__(self):
        self.stack = []
        self.min_stack = []

    def push(self, val: int) -> None:
        self.stack.append(val)

        if not self.min_stack or val <= self.min_stack[-1]:
            self.min_stack.append(val)

    def pop(self) -> None:
        if self.stack[-1] == self.min_stack[-1]:
            self.min_stack.pop()

        self.stack.pop()

    def top(self) -> int:
        return self.stack[-1]

    def getMin(self) -> int:
        return self.min_stack[-1]
```

## Complexity

| Operation  | Time Complexity |
| ---------- | --------------- |
| `push()`   | O(1)            |
| `pop()`    | O(1)            |
| `top()`    | O(1)            |
| `getMin()` | O(1)            |

* **Space Complexity:** O(n)

## Result

The Min Stack supports retrieving the minimum element in constant time while maintaining normal stack operations.

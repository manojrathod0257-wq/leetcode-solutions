# Reverse Linked List

## Problem

Given the head of a singly linked list, reverse the linked list and return the reversed list.

## Example

**Input:**

```text
1 → 2 → 3 → 4 → 5
```

**Output:**

```text
5 → 4 → 3 → 2 → 1
```

## Approach

1. Use three pointers: `prev`, `current`, and `next_node`.
2. Initially, `prev` is `None` and `current` points to the head.
3. Store the next node before changing the current node's link.
4. Reverse the current node's pointer to point to `prev`.
5. Move `prev` and `current` one step forward.
6. Continue until the entire list is reversed.
7. Return `prev` as the new head.

## Code

```python
class Solution:
    def reverseList(self, head: ListNode | None) -> ListNode | None:
        prev = None
        current = head

        while current:
            next_node = current.next
            current.next = prev
            prev = current
            current = next_node

        return prev
```

## Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(1)

## Result

The linked list is reversed in-place without using additional data structures.

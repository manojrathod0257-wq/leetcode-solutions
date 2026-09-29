# Merge Two Sorted Lists

## Problem

Given the heads of two sorted singly linked lists, merge them into one sorted linked list and return its head.

## Example

**Input:**

```text
list1 = 1 → 2 → 4
list2 = 1 → 3 → 4
```

**Output:**

```text
1 → 1 → 2 → 3 → 4 → 4
```

## Approach

1. Create a dummy node to simplify the merging process.
2. Use a `current` pointer to build the merged list.
3. Compare the values of the current nodes of both lists.
4. Attach the smaller node to the merged list.
5. Move the pointer of the list from which the node was selected.
6. Continue until one list becomes empty.
7. Attach the remaining nodes from the other list.
8. Return `dummy.next` as the head of the merged list.

## Code

```python
class Solution:
    def mergeTwoLists(self, list1: ListNode | None, list2: ListNode | None) -> ListNode | None:
        dummy = ListNode(0)
        current = dummy

        while list1 and list2:
            if list1.val <= list2.val:
                current.next = list1
                list1 = list1.next
            else:
                current.next = list2
                list2 = list2.next

            current = current.next

        if list1:
            current.next = list1
        else:
            current.next = list2

        return dummy.next
```

## Complexity

* **Time Complexity:** O(n + m)
* **Space Complexity:** O(1)

## Result

The two sorted linked lists are merged into a single sorted linked list.

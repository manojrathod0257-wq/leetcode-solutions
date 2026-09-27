#include <stdio.h>

void twoSum(int nums[], int n, int target) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("[%d, %d]\n", i, j);
                return;
            }
        }
    }

    printf("No solution found\n");
}

int main() {

    // Test Case 1: Typical case
    // Input: [2,7,11,15], target = 9
    // Expected Output: [0,1]
    int nums1[] = {2, 7, 11, 15};
    twoSum(nums1, 4, 9);

    // Test Case 2: Edge case with duplicate values
    // Input: [3,3], target = 6
    // Expected Output: [0,1]
    int nums2[] = {3, 3};
    twoSum(nums2, 2, 6);

    return 0;
}
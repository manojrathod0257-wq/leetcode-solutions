#include <stdio.h>
#include <string.h>

void reverseString(char s[]) {
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

int main() {

    // Test Case 1
    // Input: ["h","e","l","l","o"]
    // Expected Output: ["o","l","l","e","h"]
    char str1[] = "hello";
    reverseString(str1);
    printf("Test Case 1: %s\n", str1);

    // Test Case 2
    // Input: ["H"]
    // Expected Output: ["H"]
    char str2[] = "H";
    reverseString(str2);
    printf("Test Case 2: %s\n", str2);

    return 0;
}
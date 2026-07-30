#include <stdio.h>

int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) return 0;
    int slow = 0;
    for (int i = 1; i < numsSize; i++) {
        // If current element is different from the last unique element
        if (nums[i] != nums[slow]) {
            slow++;
            nums[slow] = nums[i];
        }
    }
    // Length is index + 1
    return slow + 1;
}

int main() {
    int arr[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int newLength = removeDuplicates(arr, n);

    printf("New length: %d\nArray: ", newLength);
    for (int i = 0; i < newLength; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
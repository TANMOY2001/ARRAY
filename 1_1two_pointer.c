#include <stdio.h>
#include <stdbool.h>

bool findTwoSum(int arr[], int size, int target, int *leftIdx, int *rightIdx) {
    int left = 0;
    int right = size - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            *leftIdx = left;
            *rightIdx = right;
            return true;
        } else if (sum < target) {
            // Sum too small: move left pointer to increase sum
            left++;
        } else {
            // Sum too large: move right pointer to decrease sum
            right--;
        }
    }
    return false;
}

int main() {
    int arr[] = {2, 7, 11, 15, 20}; // Must be sorted
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 26;
    int left, right;

    if (findTwoSum(arr, size, target, &left, &right)) {
        printf("Indices found: %d and %d (Values: %d + %d = %d)\n", 
                left, right, arr[left], arr[right], target);
    } else {
        printf("No pair found.\n");
    }

    return 0;
}
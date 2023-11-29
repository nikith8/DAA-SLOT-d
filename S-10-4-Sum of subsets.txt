#include <stdio.h>

void generateSubsets(int arr[], int n, int index, int subset[], int subsetSize) {
    // Base case: if index reaches the end of the array
    if (index == n) {
        // Print the current subset
        printf("Subset: { ");
        for (int i = 0; i < subsetSize; i++) {
            printf("%d ", subset[i]);
        }
        printf("}\n");
        return;
    }

    // Exclude the current element and move to the next index
    generateSubsets(arr, n, index + 1, subset, subsetSize);

    // Include the current element in the subset and move to the next index
    subset[subsetSize] = arr[index];
    generateSubsets(arr, n, index + 1, subset, subsetSize + 1);
}

int main() {
    int n;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int subset[n];  // Array to store the current subset

    printf("\nAll possible subsets:\n");
    generateSubsets(arr, n, 0, subset, 0);

    return 0;
}

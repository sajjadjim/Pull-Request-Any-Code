#include <stdio.h>

int main() {
    int n, i, sum = 0;
    
    // Ask user for array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n]; // Declare array

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Calculate sum
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Display sum
    printf("Sum of array elements: %d\n", sum);

    return 0;
}

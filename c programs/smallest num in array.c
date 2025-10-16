#include <stdio.h>

int main() {
    int n, i;
    
    // Input the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input the elements of the array
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Initialize min with the first element of the array
    int min = arr[0];
    
    // Find the smallest element in the array
    for (i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    
    // Print the smallest element
    printf("The smallest element in the array is: %d\n", min);
    
    return 0;
}


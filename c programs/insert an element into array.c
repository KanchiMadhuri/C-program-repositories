#include <stdio.h>

int main() {
    int n, i, pos, element;
    
    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n+1]; // Create an array with one extra space for the new element
    
    // Input the elements of the array
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input the position where the element is to be inserted
    printf("Enter the position where the element is to be inserted: ");
    scanf("%d", &pos);
    
    // Input the element to be inserted
    printf("Enter the element to be inserted: ");
    scanf("%d", &element);
    
    // Move elements to the right to create space for the new element
    for (i = n; i >= pos; i--) {
        arr[i] = arr[i-1];
    }
    
    // Insert the new element
    arr[pos-1] = element;
    
    // Print the updated array
    printf("The updated array is: ");
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
 

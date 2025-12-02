//WAP to read a list of integers and store it in a single dimensional array. Write a C program to 
 //print the second largest integer in a list of integers. 
 #include <stdio.h>

int main() {
    int n, i;
    
    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];


    // Input array elements
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize first and second largest
    int first, second;
    
    if (n < 2) {
        printf("Second largest does not exist (need at least two numbers).\n");
        return 0;
    }

    first = second = -2147483648; // Smallest possible integer

    // Find the first and second largest
    for(i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    if (second == -2147483648)
        printf("No second largest element (all numbers are equal).\n");
    else
        printf("The second largest number is: %d\n", second);

    return 0;
}



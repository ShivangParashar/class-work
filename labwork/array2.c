//WAP to read a list of integers and store it in a single dimensional array. Write a C program to 
//count and display positive, negative, odd, and even numbers in an array. 4
#include <stdio.h>

int main() {
    int n, i;
    int positive = 0, negative = 0, even = 0, odd = 0;

    // Input number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Process each element
    for(i = 0; i < n; i++) {
        if(arr[i] > 0)
            positive++;
        else if(arr[i] < 0)
            negative++;

        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    // Display the results 
    printf("\nCount of Positive numbers: %d", positive);
    printf("\nCount of Negative numbers: %d", negative);
    printf("\nCount of Even numbers: %d", even);
    printf("\nCount of Odd numbers: %d\n", odd);

    return 0;
}

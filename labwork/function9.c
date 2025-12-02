// Write a function to find the sum of digits of a number.
#include <stdio.h>

int sumOfDigits(int num) {
    int sum = 0, remainder;

    while (num != 0) {
        remainder = num % 10;  // Get the last digit
        sum += remainder;       // Add it to sum
        num /= 10;              // Remove the last digit
    }

    return sum;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("The sum of digits of %d is: %d\n", n, sumOfDigits(n));

    return 0;
}

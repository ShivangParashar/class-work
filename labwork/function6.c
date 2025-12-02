// Write a function that takes a number and returns 1 if prime, otherwise 0.
#include <stdio.h>

int isPrime(int num) {
    if (num <= 1)
        return 0;

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return 0;
    }

    return 1; 
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPrime(n))
        printf("%d is a Prime number.\n", n);
    else
        printf("%d is not a Prime number.\n", n);

    return 0;
}

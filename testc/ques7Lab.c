//Calculate the sum of digits of a given integer
#include <stdio.h>
int main() {
    int n, sum = 0, digit;
    printf("Enter the number: ");
    scanf("%d", &n);

    while(n != 0) {       
        digit = n % 10;   // extract last digit
        sum += digit;    
        n /= 10;          // remove last digit
    }

    printf("The sum of digits = %d\n", sum);
    return 0;
}

//Write a function to check whether a number is palindrome or not.
#include <stdio.h>

int isPalindrome(int num) {
    int originalNum = num;
    int reversed = 0, remainder;

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reversed)
        return 1;  
    else
        return 0;  
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPalindrome(n))
        printf("%d is a Palindrome number.\n", n);
    else
        printf("%d is not a Palindrome number.\n", n);

    return 0;
}

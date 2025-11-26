#include <stdio.h>

int main() {
    int a = 10;
    float b = 5.75;
    char c = 'X';

    int *pInt = &a;
    float *pFloat = &b;
    char *pChar = &c;

    printf("Original Addresses:\n");
    printf("pInt   = %p\n", pInt);
    printf("pFloat = %p\n", pFloat);
    printf("pChar  = %p\n", pChar);

    
    pInt++;
    pFloat++;
    pChar++;

    printf("\nAfter Increment (p++):\n");
     printf("pInt   = %p\n", pInt);
    printf("pFloat = %p\n", pFloat);
    printf("pChar  = %p\n", pChar);
    
    pInt--;
    pFloat--;
    pChar--;

    printf("\nAfter Decrement (p--):\n");
    printf("pInt   = %p\n", pInt);
    printf("pFloat = %p\n", pFloat);
    printf("pChar  = %p\n", pChar);

        printf("\nValues accessed using pointers:\n");
    printf("*pInt   = %d\n", *pInt);
    printf("*pFloat = %.2f\n", *pFloat);
    printf("*pChar  = %c\n", *pChar);

    return 0;
}

#include <stdio.h>


void updateValues(int *x, float *y, char *z) {
    *x += 5;      // Add 5 to integer value
    *y *= 1.5;    // Multiply float by 1.5
    *z = 'K';     // Change character to K
}

int main() {
    int a = 10;
    float b = 4.0;
    char c = 'A';

    printf("Before function call:\n");
    printf("a = %d\n", a);
    printf("b = %.2f\n", b);
    printf("c = %c\n", c);

    
    updateValues(&a, &b, &c);

    printf("\nAfter function call:\n");
    printf("a = %d\n", a);
    printf("b = %.2f\n", b);
    printf("c = %c\n", c);

    return 0;
}

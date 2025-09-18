#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter the first side: ");
    scanf("%d", &a);

    printf("Enter the second side: ");
    scanf("%d", &b);

    printf("Enter the third side: ");
    scanf("%d", &c);

    if (a+b > c && b+c > a && a+c > b) {
        printf("The triangle exists\n");

        
        if (a*a == b*b + c*c || 
            b*b == a*a + c*c || 
            c*c == a*a + b*b) {
            printf("It is a right-angled triangle\n");
        } else {
            printf("It is NOT a right-angled triangle\n");
        } if (a==b&&b==c) {printf("it is an equilateral triangle");}
        else {printf("it is a scalene triangle");}

    } else {
        printf("The triangle will not exist\n");
    }

    return 0;
}

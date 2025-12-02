//Declare a static local variable inside a function. Observe how its value persists across 
//function calls.
#include <stdio.h>

void Function() {
    static int count = 0;  // static local variable
    int temp = 0;          // normal local variable

    count++;  // retains value across calls
    temp++;   // reinitialized every time

    printf("Static count = %d, Local temp = %d\n", count, temp);
}

int main() {
    printf("First call:\n");
    Function();

    printf("Second call:\n");
    Function();

    printf("Third call:\n");
    Function();

    return 0;
}

#include <stdio.h>
int main(){
    int a=10;
    float b=3.14;
    char c='A';
    
    int *intPtr = &a;
    float *floatPtr = &b;
    char *charPtr = &c;

    printf("Address stored in intPtr   : %p\n", intPtr);
    printf("Address stored in floatPtr : %p\n", floatPtr);
    printf("Address stored in charPtr  : %p\n", charPtr);

   
    printf("Value at address intPtr points to   : %d\n", *intPtr);
    printf("Value at address floatPtr points to : %.2f\n", *floatPtr);
    printf("Value at address charPtr points to  : %c\n", *charPtr);

return 0;
}
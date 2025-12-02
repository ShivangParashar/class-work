  //Write a function int add(int a, int b) that returns the sum of two numbers
#include<stdio.h>

void sum(){
    int a,b;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    printf("sum will be %d",a+b);

}
int main(){
    sum();
    return 0;
}
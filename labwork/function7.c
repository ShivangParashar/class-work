//Write a program to find the factorial of a number using a function.
#include<stdio.h>

void fact(){
    int a;
    int fact=1;
    printf("enter the number:");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        fact*=i;
    }
    printf("the factorial will be %d",fact);
}
int main(){
    fact();
    return 0;
}
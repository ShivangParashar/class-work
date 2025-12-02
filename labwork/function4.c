//Write a function to find the maximum of two numbers.
#include<stdio.h>

void max(){
    int a,b;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    if(a>b){
        printf("the maximum will be %d",a);
    }
    else{
        printf("the maximum will be %d",b);
    }

}
int main(){
    max();
    return 0;
}
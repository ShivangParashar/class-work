// Write a program to check whether a number is even or odd using a function. 
#include<stdio.h>

void check(){
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    if(a%2==0){
        printf("%d is an even number",a);
    }
    else{
        printf("%d is an odd number",a);
    }
}
int main(){
    check();
    return 0;
}
    
    

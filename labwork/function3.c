 //Write a program to calculate the square of a number using a function. 
 #include<stdio.h>

 void square(){
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    printf("the square will be %d",a*a);
 }
 int main(){
    square();
    return 0;
 }
// Find the factorial of a given number.
#include<stdio.h>
int main(){
    int i,n;
    int fact=1;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact*=i;}
       printf("the factorial will be:%d",fact);
    return 0;
}
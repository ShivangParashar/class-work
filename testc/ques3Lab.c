//Print the multiplication table of a number entered by the user.
#include<stdio.h>
int main(){
    int i,n;
    printf("enter the number:");
    scanf("%d",&n);
    
    for(i=1;i<=10;i++){
        
        printf("%dX%d=%d\n",n,i,n*i);
    }return 0;
    
    
}
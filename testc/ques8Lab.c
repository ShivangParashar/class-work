// Compute a^b (a raised to the power b)
#include<stdio.h>
int main(){
    int a,b;
    int i,sol=1;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    
    scanf("%d",&b);
    for(i=1;i<=b;i++){
        sol*=a;
    }
    printf("a^b is :%d",sol);
    return 0;
}



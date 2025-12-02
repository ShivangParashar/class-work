// Compute a^b (a raised to the power b)
#include<stdio.h>
int main(){
    float a;
    int b;
    float i,sol=1;
    printf("enter a:");
    scanf("%f",&a);
    printf("enter b:"); 
    scanf("%d",&b);
    for(i=1;i<=b;i++){
        sol*=a;
    }
    printf("a^b is :%.2f",sol);
    return 0;
}



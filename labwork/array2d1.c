#include <stdio.h>
int main(){
    int n,m;
    printf("enter the number of rows:");
    scanf("%d",&n);
    printf("enter the number of columns:");
    scanf("%d",&m);
         int arr[n][m];
         int sum=0;
         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                scanf("%d",&arr[i][j]);
                sum+=arr[i][j];
               
                  }
                
         }
         printf("the sum will be %d",sum);
    
return 0;
}
//Add two matrices. 
#include <stdio.h>
int main(){
    int n,m;
    printf("enter the number of rows:");
    scanf("%d",&n);
    printf("enter the number of columns:");
    scanf("%d",&m);
         int arr1[n][m];
         int arr2[n][m];
         int sum[n][m];
         printf("enter the elements of first matrix:");
         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                scanf("%d",&arr1[i][j]);
               
                  }
                
         }
         printf("enter the elements of second matrix:");
          for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                scanf("%d",&arr2[i][j]);
               
                  }
                
         }
         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                sum[i][j]=arr1[i][j]+arr2[i][j];
               
                  }
                
         }
         printf("the sum of two matrices will be:\n");
          for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                printf("%d ",sum[i][j]);
               
                  }
                  printf("\n");
                
         }
         return 0;
}
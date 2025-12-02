//Take an m×n matrix and a key. Search for the key and print its row and column index if found.
#include <stdio.h>
int main(){
    int n,m,key,flag=0;
    printf("enter the number of rows:");
    scanf("%d",&n);
    printf("enter the number of columns:");
    scanf("%d",&m);
         int arr[n][m];
         printf("enter the elements of matrix:");
         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                scanf("%d",&arr[i][j]);
               
                  }
                
         }
         printf("enter the key to be searched:");
         scanf("%d",&key);
         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]==key){
                    printf("the key is found at row %d and column %d",i,j);
                    flag=1;
                }
               
                  }
                
         }
         if(flag==0){
            printf("the key is not found");
         }
         return 0;
}
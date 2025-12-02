#include <stdio.h>
int main(){
    int n,m;
    printf("enter the number of rows:");
    scanf("%d",&n);
    printf("enter the number of columns:");
    scanf("%d",&m);
         int arr[n][m];
         
         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                scanf("%d",&arr[i][j]);
            }}
            int largest;
            largest=arr[0][0];
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(arr[i][j]>largest){
                        largest=arr[i][j];
                    }
                }
            }
            printf("the largest value will be %d",largest);
            return 0;
        }
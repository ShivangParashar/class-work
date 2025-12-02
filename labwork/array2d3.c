#include <stdio.h>

int main() {
    int n, m;
    printf("enter the number of rows:");
    scanf("%d", &n);

    printf("enter the number of columns:");
    scanf("%d", &m);

    int arr[n][m];
   

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d",&arr[i][j]);
               
        }
       
    }
    //row major
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
           printf("%d",arr[i][j]);
               
        }
        printf("\n");
         
    }
      //column major
        for(int j = 0; j < m; j++) {
            for(int i = 0; i < n; i++) {
             printf("%d",arr[i][j]);
                 
            }
            printf("\n");}
            return 0;
        }

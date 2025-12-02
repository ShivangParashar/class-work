#include <stdio.h>

int main() {
    int n, m;
    int transpose;
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
   
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
           printf("%d",arr[i][j]);
               
        }
        printf("\n");
         
    }
      
        for(int j = 0; j < m; j++) {
            for(int i = 0; i < n; i++) {
              transpose = arr[i][j];
             printf("%d",transpose);
                 
            }
            printf("\n");}
           
            return 0;
        }

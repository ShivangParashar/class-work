//Declare variables within different code blocks (enclosed by curly braces) and test their 
//accessibility within and outside those blocks. 
#include <stdio.h>

int main() {
    int x = 10; 
    printf("In main block: x = %d\n", x);

    {   // Start of inner block 1
        int y = 20; 
        printf("Inside block 1: x = %d, y = %d\n", x, y);

        {   // Start of inner block 2
            int z = 30; 
            printf("Inside block 2: x = %d, y = %d, z = %d\n", x, y, z);
        } // end of inner block 2

        

        printf("Back in block 1: y = %d\n", y);
    } // end of inner block 1

   

    printf("Back in main: x = %d\n", x);
    return 0;
}

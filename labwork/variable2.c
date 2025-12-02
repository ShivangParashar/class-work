//. Declare a local variable inside a function and try to access it outside the function. Compare 
 //this with accessing the global variable from within the function. 
 #include <stdio.h>


int globalVar = 10;

void showVariables() {
    int localVar=5;
    
   
    printf("Global variable = %d\n", globalVar);
    printf("Local variable = %d\n", localVar);
}

int main() {
    
    printf("Global variable = %d\n", globalVar);

    showVariables();

   
    printf("Back in main(), global variable = %d\n", globalVar);
    return 0;
}

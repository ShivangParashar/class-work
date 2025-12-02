//Declare a global variable outside all functions and use it inside various functions to 
 //understand its accessibility.
 #include <stdio.h>


int count = 0;


void increment() {
    count++;
    printf("Inside increment(): count = %d\n", count);
}


void decrement() {
    count--;
    printf("Inside decrement(): count = %d\n", count);
}

int main() {
    printf("Initial count = %d\n", count);
    
    increment();  
    increment();
    decrement();  
    
    printf("Final count in main() = %d\n", count);
    return 0;
}

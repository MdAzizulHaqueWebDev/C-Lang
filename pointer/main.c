#include <stdio.h>

int main() {
    int num = 10;
    int num2 = 5555 ;
    int *ptr = &num;  // Pointer storing the address of num
 int *num2Pointer = &num2;  // Pointer storing the address of num
    printf("Address of num: %p\n", ptr);       // Prints the address of num
    printf("Value of num: %d\n", *ptr);        // Prints the value of num
    printf("Address of ptr: %p\n", &ptr);      // Prints the address of ptr itself

     printf("Address of num2: %p\n", num2Pointer);       // Prints the address of num
    printf("Value of num2: %d\n", *num2Pointer);        // Prints the value of num
    printf("Address of num2pointer: %p\n", &num2Pointer);      // Prints the address of ptr itself

    return 0;
}

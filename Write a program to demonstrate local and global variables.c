//Write a program to demonstrate local and global variables.

#include <stdio.h>

// Global variable
int num = 22;

int main()
{
    // Local variable
    int value = 36;

    // Printing local variable
    printf("Local variable = %d\n", value);

    // Printing global variable
    printf("Global variable = %d\n", num);

    return 0;
}

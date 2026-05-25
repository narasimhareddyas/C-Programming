//Write a C program to take integer input from user and print it.

#include <stdio.h>

int main()
{
    int num;   // Integer variable

    // Taking integer input from user
    printf("Enter the num: ");
    scanf("%d", &num);

    // Printing the entered number
    printf("num = %d\n", num);

    return 0;
}

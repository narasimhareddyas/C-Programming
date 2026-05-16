//Write a C program to swap two variables without using a third variable.

#include <stdio.h>

int main()
{
    int num1, num2;

    // Input first number
    printf("Enter the num1: ");
    scanf("%d", &num1);

    // Input second number
    printf("Enter the num2: ");
    scanf("%d", &num2);

    // Swapping using XOR operator
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;

    // Printing swapped values
    printf("num1 = %d\nnum2 = %d", num1, num2);

    return 0;
}

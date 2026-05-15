//Write a C program to swap two variables using a third variable.

#include <stdio.h>

int main()
{
    int num1, num2, temp;

    // Input first number
    printf("Enter the num1: ");
    scanf("%d", &num1);

    // Input second number
    printf("Enter the num2: ");
    scanf("%d", &num2);

    // Swapping using third variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    // Printing swapped values
    printf("num1 = %d\nnum2 = %d", num1, num2);

    return 0;
}

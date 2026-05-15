//Write a C program to store two numbers in variables and print their sum.

#include <stdio.h>

int main()
{
    int num1, num2, sum;

    // Input first number
    printf("Enter the num1: ");
    scanf("%d", &num1);

    // Input second number
    printf("Enter the num2: ");
    scanf("%d", &num2);

    // Adding two numbers
    sum = num1 + num2;

    // Printing result
    printf("sum = %d\n", sum);

    return 0;
}

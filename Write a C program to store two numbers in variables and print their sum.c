//Write a C program to store two numbers in variables and print their sum.

#include <stdio.h>

int main()
{
    int s, n, sum;

    // Input first number
    printf("Enter the num s: ");
    scanf("%d", &s);

    // Input second number
    printf("Enter the num n: ");
    scanf("%d", &n);

    // Adding two numbers
    sum = s + n;

    // Printing result
    printf("sum = %d\n", sum);

    return 0;
}

//Write a program to find the sum of digits of a number.

#include<stdio.h>

int main()
{
    int digit, sum = 0, rem;

    printf("Enter the digit: ");
    scanf("%d", &digit);

    while(digit > 0)
    {
        rem = digit % 10;
        sum = sum + rem;
        digit = digit / 10;
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}

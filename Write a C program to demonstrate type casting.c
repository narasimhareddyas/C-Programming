//Write a C program to demonstrate type casting.

#include <stdio.h>

int main()
{
    int num1 = 10, num2 = 3;

    // Without type casting
    printf("Integer division = %d\n", num1 / num2);

    // With type casting
    printf("Float division = %.2f\n", (float)num1 / num2);

    return 0;
}

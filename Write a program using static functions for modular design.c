//Write a program using static functions for modular design.

#include <stdio.h>


static int add(int a, int b)
{
    return a + b;
}


static int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    int x = 10, y = 20;

    printf("Sum = %d\n", add(x, y));
    printf("Product = %d\n", multiply(x, y));

    return 0;
}

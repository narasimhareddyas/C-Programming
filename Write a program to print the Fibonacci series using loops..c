//Write a program to print the Fibonacci series using loops.

#include<stdio.h>

int main()
{
    int num;
    int a = 0, b = 1, c;
    int i;

    printf("Enter the Fibonacci terms: ");
    scanf("%d", &num);

    printf("Fibonacci Series: ");

    for(i = 1; i <= num; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}

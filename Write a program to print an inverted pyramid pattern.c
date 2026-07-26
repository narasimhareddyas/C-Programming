//Write a program to print an inverted pyramid pattern.

#include<stdio.h>

int main()
{
    int i, j, space;
    int rows = 5;

    for(i = rows; i >= 1; i--)
    {
        // Print leading spaces
        for(space = 0; space < rows - i; space++)
        {
            printf(" ");
        }

        // Print stars
        for(j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

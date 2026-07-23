//Write a program to print Pascal's Triangle.

#include<stdio.h>

int main()
{
    int rows, i, j;
    int coef;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < rows - i - 1; j++)
        {
            printf(" ");
        }

        coef = 1;

        for(j = 0; j <= i; j++)
        {
            printf("%d ", coef);
            coef = coef * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}

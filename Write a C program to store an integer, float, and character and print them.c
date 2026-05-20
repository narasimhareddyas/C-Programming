//Write a C program to store an integer, float, and character and print them.

#include <stdio.h>

int main()
{
    int num;
    float value;
    char name;

    // Input integer
    printf("Enter the num: ");
    scanf("%d", &num);

    // Input float
    printf("Enter the value: ");
    scanf("%f", &value);

    // Input character
    printf("Enter the character: ");
    scanf(" %c", &name);   // space before %c is important

    // Printing values
    printf("num = %d\n", num);
    printf("value = %.2f\n", value);
    printf("name = %c\n", name);

    return 0;
}

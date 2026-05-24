//Write a C program to store a double value and print it.

#include <stdio.h>

int main()
{
    double value;   // Variable to store double value

    // Taking double input
    printf("Enter the double value: ");
    scanf("%lf", &value);

    // Printing double value
    printf("Double value = %lf\n", value);

    return 0;
}

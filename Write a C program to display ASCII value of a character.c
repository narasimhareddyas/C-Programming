//Write a C program to display ASCII value of a character.

#include <stdio.h>

int main()
{
    char name;

    // Taking character input
    printf("Enter the character name: ");
    scanf("%c", &name);

    // Printing ASCII value of character
    printf("ASCII value = %d\n", name);

    return 0;
}

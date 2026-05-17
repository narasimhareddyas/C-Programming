//Write a C program to store a character in a variable and print it.

#include <stdio.h>

int main()
{
    char text;   // Variable to store a character

    // Taking character input
    printf("Enter the text: ");
    scanf("%c", &text);

    // Printing the character
    printf("text = %c\n", text);

    return 0;
}

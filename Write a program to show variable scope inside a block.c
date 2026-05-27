//Write a program to show variable scope inside a block.

#include <stdio.h>

int main()
{
    int a = 22;   // Outer variable

    printf("Outer block a = %d\n", a);

    // Inner block
    {
        int b = 36;   // Variable inside block

        printf("Inside block b = %d\n", b);
    }

    // b cannot be accessed here
    // printf("%d", b);  // Error

    return 0;
}

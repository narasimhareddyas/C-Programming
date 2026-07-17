//Write a program to check whether a number is a palindrome.

#include<stdio.h>

int main()
{
    int num, original, reverse = 0, rem;

    printf("Enter the num: ");
    scanf("%d", &num);

    original = num;

    while(num > 0)
    {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num = num / 10;
    }

    if(original == reverse)
    {
        printf("%d is a palindrome\n", original);
    }
    else
    {
        printf("%d is not a palindrome\n", original);
    }

    return 0;
}

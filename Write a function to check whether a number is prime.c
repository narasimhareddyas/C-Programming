//Write a function to check whether a number is prime.

#include <stdio.h>

int prime(int num)
{
    int i;

    if(num <= 1)
    {
        return 0;
    }

    for(i = 2; i < num; i++)
    {
        if(num % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int num;
    int prime_num;

    printf("Enter the num: ");
    scanf("%d", &num);

    prime_num = prime(num);

    if(prime_num)
    {
        printf("%d is Prime\n", num);
    }
    else
    {
        printf("%d is Not Prime\n", num);
    }

    return 0;
}

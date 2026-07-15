//Write a program to reverse a given number using a loop.

#include<stdio.h>
int main()
{
int num, rem;
int reverse=0;
printf("Enter the num:");
scanf("%d",&num);
while(num>0)
{
    rem=num%10;
    reverse=reverse*10+rem;
    num=num/10;
}
printf("%d\n",reverse);
return 0;
}

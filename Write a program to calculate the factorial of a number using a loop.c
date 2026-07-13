//Write a program to calculate the factorial of a number using a loop.

#include<stdio.h>
int main()
{
int num;
int fact=1;
printf("Enter the num:");
scanf("%d",&num);
for(int i=1;i<=num;i++)
{
fact=i*fact;
}
printf("Factorial of %d= %d\n",num,fact);
return 0;
}

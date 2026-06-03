//Write a program to check whether a number is positive or negative using if-else.

#include<stdio.h>
int main()
{
int num;
printf("Enter the num:");
scanf("%d",&num);
if(num>0)
{
printf("%d is positive number\n",num);
}
else if(num<0)
{
printf("%d is negative number\n",num);
}
else
{
printf("%d is zero\n",num);
}
return 0;
}

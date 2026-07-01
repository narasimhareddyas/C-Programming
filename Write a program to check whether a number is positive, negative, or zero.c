//Write a program to check whether a number is positive, negative, or zero.

#include<stdio.h>
int main()
{
int num;
printf("Enter the num:");
scanf("%d",&num);
if(num>0)
{
printf("%d is positive num\n",num);
}
else if(num<0)
{
printf("%d is negative num\n",num);
}
else
{
printf("%d is zero\n",num);
}
return 0;
}

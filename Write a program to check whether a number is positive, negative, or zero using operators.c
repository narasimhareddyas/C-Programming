//Write a program to check whether a number is positive, negative, or zero using operators.

#include<stdio.h>
int main()
{
int num;
printf("Enter the num:");
scanf("%d",&num);
if(num<0)
{
printf("%d is negative\n",num);
}
else if(num>0)
{
printf("%d is positive\n",num);
}
else
{
printf("%d is zero\n",num);
}
return 0;
}

//Write a program to check whether a number is even or odd.

#include<stdio.h>
int main()
{
int num;
printf("Enter the num:");
scanf("%d",&num);
if(num%2==0)
{
printf("%d is even number\n",num);
}
else
{
printf("%d is odd number\n",num);
}
return 0;
}

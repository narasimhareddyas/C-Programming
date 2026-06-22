//Write a program to find whether a number is even or odd using operators.

#include<stdio.h>
int main()
{
int num;
printf("Enter the num:");
scanf("%d",&num);
if(num%2==0)
{
printf("%d is even\n",num);
}
else
{
printf("%d is odd\n",num);
}
return 0;
}

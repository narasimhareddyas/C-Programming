//Write a program to check whether a number is a power of 2 using bitwise operators.

#include<stdio.h>
int main()
{
int num;
printf("Enter the num:");
scanf("%d",&num);
if(num>0 && (num & (num-1))==0)
{
    printf("%d is power of 2\n",num);
}
else
{
    printf("%d is not power of 2\n",num);
}
return 0;
}

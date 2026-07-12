//Write a program to print the multiplication table of a given number.

#include<stdio.h>
int main()
{
int num;
printf("Enter the Multiplication Table:");
scanf("%d",&num);
for(int i=1;i<=10;i++)
{
int mul=num*i;
printf("%d*%d=%d\n",num,i,mul);
}
return 0;
}

//Write a program to find the largest of two numbers using the ternary operator.

#include<stdio.h>
int main()
{
int num1,num2;
printf("Enter the num1:");
scanf("%d",&num1);
printf("Enter the num2:");
scanf("%d",&num2);
int largest= num1>num2?num1: num2;
printf("%d is largest\n",largest);
return 0;
}

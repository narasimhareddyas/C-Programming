//Write a program to swap two numbers using arithmetic operators without using a third variable.

#include<stdio.h>
int main()
{
int num1,num2;
printf("Enter the num1:");
scanf("%d",&num1);
printf("Enter the num2:");
scanf("%d",&num2);
num1=num1+num2;
num2=num1-num2;
num1=num1-num2;
printf("num1= %d\n",num1);
printf("num2= %d\n",num2);
return 0;
}

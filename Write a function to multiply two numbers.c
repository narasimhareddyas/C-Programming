//Write a function to multiply two numbers.

#include<stdio.h>
int mul(int a, int b)
{
int multiply= a*b;
return multiply;
}

int main()
{
int num1,num2,mult;
printf("Enter the num1:");
scanf("%d",&num1);
printf("Enter the num2:");
scanf("%d",&num2);
mult= mul(num1,num2);
printf("%d * %d = %d\n",num1,num2,mult);
return 0;
}

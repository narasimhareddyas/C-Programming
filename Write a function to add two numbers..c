//Write a function to add two numbers.

#include<stdio.h>
int add(int a,int b)
{
int sum=a+b;
return sum;
}
int main()
{
int num1,num2,sum;
printf("Enter the num1:");
scanf("%d",&num1);
printf("Enter the num2:");
scanf("%d",&num2);
sum=add(num1,num2);
printf("%d\n",sum);
return 0;
}

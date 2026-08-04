//Write a function to subtract two numbers.

#include<stdio.h>
int sub(int a, int b)
{
int subt=a-b;
return subt;
}
int main()
{
int num1,num2,minus;
printf("Enter the num1:");
scanf("%d",&num1);
printf("Enter the num2:");
scanf("%d",&num2);
minus=sub(num1,num2);
printf("subtraction of %d and %d=%d\n",num1,num2,minus);
return 0;
}

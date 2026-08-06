//Write a function to divide two numbers.

#include<stdio.h>
int div(int a, int b)
{
return a/b;
}
int main()
{
int num1,num2;
float division;
printf("Enter the num1:");
scanf("%d",&num1);
printf("Enter the num2:");
scanf("%d",&num2);
if(num2!=0)
{
division= div(num1, num2);
printf("%d / %d = %.2f\n",num1,num2,division);
}
else
{
        printf("Division by zero is not possible.\n");
}
return 0;
}

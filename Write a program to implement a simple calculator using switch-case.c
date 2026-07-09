//Write a program to implement a simple calculator using switch-case.

#include<stdio.h>
int main()
{
int num1,num2;
char op;
printf("Enter the num1:");
scanf("%d",&num1);
printf("Enter the op (+,-,*,/):");
scanf(" %c",&op);
printf("Enter the num2:");
scanf("%d",&num2);
switch (op)
{
case '+':
{
printf("Addition= %d\n",num1+num2);
break;
}
case '-':
{
printf("Subtraction= %d\n",num1-num2);
break;
}
case '*':
{
printf("Multiplication= %d\n",num1*num2);
break;
}
case '/':
{
    if(num2!=0)
    {
printf("Division= %d\n",num1/num2);
    }
else
{
    printf("Division with 0 operand is not possible.\n");
}
break;
}
default:
    {
        printf("Invalid operator.\n");
    }
}
return 0;
}

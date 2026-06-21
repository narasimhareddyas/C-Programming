//Write a program to perform all arithmetic operations on two numbers.

#include<stdio.h>
int main()
{
int num1,num2;
printf("Enter the num1:");
scanf("%d",&num1);
printf("Enter the num2:");
scanf("%d",&num2);
int add= num1+num2; //addition
int sub= num1-num2; //subtraction
int mul= num1*num2; //multiplication
int div= num1/num2; //division
printf("addition= %d\n",add);
printf("subtraction= %d\n",sub);
printf("multiplication= %d\n",mul);
if(num2!=0)
{
    int div= num1/num2; //division
    int mod= num1%num2; //modulus
    printf("division= %d\n",div);
    printf("modulus= %d\n",mod);
}
else
{
 printf("Can't do division & modulus by zero\n");
}
return 0;
}

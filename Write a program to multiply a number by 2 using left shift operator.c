//Write a program to multiply a number by 2 using left shift operator.

#include<stdio.h>
int main()
{
int num;
printf("Enter the num:");
scanf("%d",&num);
int mul=num<<1;
printf("Mul= %d\n",mul);
return 0;
}

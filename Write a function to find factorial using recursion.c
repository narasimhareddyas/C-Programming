//Write a function to find factorial using recursion.

#include<stdio.h>

int fact(int s)
{
if(s==0 || s==1)
{
return 1;
}
return s*fact(s-1);
}
int main()
{
int num;
printf("Enter the num:");
scanf("%d",&num);

int factorial=fact(num);
printf("factorial of %d =%d\n",num,factorial);
return 0;
}

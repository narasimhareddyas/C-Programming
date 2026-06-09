//Write a function to add two numbers.

#include<stdio.h>
int sum(int a,int b)
{
return a+b;
}

int main()
{
int s,n;
printf("Enter the num s:");
scanf("%d",&s);
printf("Enter the num n:");
scanf("%d",&n);

int add=sum(s,n);
printf("%d\n",add);
return 0;
}

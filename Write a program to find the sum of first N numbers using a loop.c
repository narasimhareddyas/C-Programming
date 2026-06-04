//Write a program to find the sum of first N numbers using a loop.

#include<stdio.h>
int main()
{
int sum= 0;
int i,num;
printf("Enter the first N numbers:");
scanf("%d",&num);
for(i=0;i<=num;i++)
{
sum= sum+i;
}
printf("sum= %d\n",sum);
return 0;
}

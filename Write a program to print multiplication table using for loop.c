//Write a program to print multiplication table using for loop.

#include<stdio.h>
int main()
{
int num;
int i;
int table;
printf("Enter the num table:");
scanf("%d",&num);
for(i=1;i<=10;i++)
{
table= num*i;
printf("%d*%d= %d\n",num,i,table);
}
return 0;
}

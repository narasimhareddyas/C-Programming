//Write a program to count the number of set bits in a number.

#include<stdio.h>
int main()
{
int num,temp;
int count=0;
printf("Enter the num:");
scanf("%d",&num);
while(num>0)
{
if(num&1)
{
count++;
}
    num=num>>1;
}
printf("The %d set bits count=%d\n",num,count);
return 0;
}

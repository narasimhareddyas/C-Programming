//Write a program to count number of 1s in binary using bitwise operator.

#include<stdio.h>
int main()
{
int count=0;
int num;
printf("Enter the num:");
scanf("%d",&num);
while(num>0)
{
    count+=(num&1);
    num= num>>1;
}

printf("no.of 1s= %d\n",count);
return 0;
}

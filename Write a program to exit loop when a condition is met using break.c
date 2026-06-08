//Write a program to exit loop when a condition is met using break.

#include<stdio.h>
int main()
{
int s;
for(s=0;s<=36;s++)
{
if(s>22)
{
break;
}
printf("%d ",s);
}
return 0;
}

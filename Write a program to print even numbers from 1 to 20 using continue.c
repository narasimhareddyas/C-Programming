//Write a program to print even numbers from 1 to 20 using continue.

#include<stdio.h>
int main()
{
int s;
printf("even numbers from 1 to 20:");
for(s=1;s<=20;s++)
{
if(s%2!=0)
    {
        continue;
    }
printf(" %d",s);
}
return 0;
}

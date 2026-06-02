//Write a program to set, clear, and toggle a bit using bitwise operators.

#include<stdio.h>
int main()
{
int num;
int pos=1;
printf("Enter the num:");
scanf("%d",&num);

printf("set bit: %d\n",num|(1<<pos));

printf("reset bit :%d\n",num&~(1<<pos));

printf("toggle bit %d\n",num^(1<<pos));

return 0;
}

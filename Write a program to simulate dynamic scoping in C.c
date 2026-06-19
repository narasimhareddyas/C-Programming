//Write a program to simulate dynamic scoping in C.

#include<stdio.h>
void fun2(int x)
{
printf("fun2 of x= %d\n",x);
}

void fun1(int x)
{
x=x+22;
fun2(x);
}

int main()
{
    int x=20;
fun1(x);
return 0;
}

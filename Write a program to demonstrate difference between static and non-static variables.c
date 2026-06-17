//Write a program to demonstrate difference between static and non-static variables.

#include<stdio.h>
void demo()
{
static int n= 22;
int s =36;
s++;
n++;
printf("%d, %d\n",n,s);
}

int main()
{
    demo();
    demo();
     demo();
    demo();
     demo();
    demo();
    return 0;

}

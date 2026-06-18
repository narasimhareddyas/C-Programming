//Write a program to show scope of variables in nested blocks.

#include<stdio.h>
int main()
{
int a=20;
printf("%d\n",a);
{
    int b=22;
    printf("%d\n",a);
    printf("%d\n",b);
 {
     int c=36;
     printf("%d\n",a);
     printf("%d\n",b);
     printf("%d\n",c);

 }
}
}

//Write a program to find whether a character is uppercase, lowercase, digit, or special character.

#include<stdio.h>
int main()
{
char ch;
printf("Enter the ch:");
scanf("%c",&ch);
if((ch>='A')&&(ch<='Z'))
{
printf("%c is uppercase\n",ch);
}
else if(ch>='a'&&ch<='z')
{
printf("%c is lowercase\n",ch);
}
else if(ch>='0'&&ch<='9')
{
printf("%c is digit\n",ch);
}
else
{
printf("%c is special character\n",ch);
}
return 0;
}

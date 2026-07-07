//Write a program to check whether a character is a vowel or consonant.

#include<stdio.h>
int main()
{
char name;
printf("Enter the name:");
scanf("%c",&name);
if(name=='a'||name=='e'||name=='i'||name=='o'||name=='u'||name=='A'||name=='E'||name=='I'||name=='O'||name=='U')
{
printf("%c is vowel\n",name);
}
else if((name>='a'&&name<='z')||(name>='A'&&name<='Z'))
{
printf("%c is consonant\n",name);
}
else
{
printf("%c is not vowel and consonant\n",name);
}
return 0;
}

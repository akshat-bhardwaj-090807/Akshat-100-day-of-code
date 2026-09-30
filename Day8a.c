#include<stdio.h>
int main()
{
char ch;

printf("enter a character");
scanf("%c",&ch);

if(ch>='A' && ch<='Z')
{printf("character is upper case alphabet");}

else if(ch>='a' && ch<='z')
{printf("character is lower case alphabet");}

else if(ch>='1' && ch<='9')
{printf("character is digit");}

else
{printf("character is a special character");}
return 0;
} 

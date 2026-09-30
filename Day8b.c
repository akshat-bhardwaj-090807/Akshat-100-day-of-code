#include<stdio.h>
int main()
{
int num1,num2,num3;
printf("enter num1;num2;num3");
scanf("%d%d%d",&num1,&num2,&num3);

if(num1>=num2)
{
if(num1>=num3)
{printf("largest is num 1");}
else
{printf("largest is num3");}
}

else
{
if(num2>=num3)
{printf(" largest is num2");}
else
{printf("largest is num 3");}
}
return 0;
}

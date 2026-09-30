#include<stdio.h>
int main()
{
int num1,num2;
printf("enter num1 and num2");
scanf("%d%d",&num1,&num2);

int temp;
temp=num1;
num1=num2;
num2=temp;

printf("after swap:%d%d",num1,num2);
return 0;
}

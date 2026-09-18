#include<stdio.h>
int main()
{
int num1;
int num2;
scanf("%d%d",&num1,&num2);
int temp;
temp = num1;
num1 = num2;
num2 = temp;

printf("after swap:%d%d\n",num1,num2);
return 0;
}

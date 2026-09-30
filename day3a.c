#include<stdio.h>
int main()
{
int celsius;
int fahrenhiet;

printf("enter degree in celsius");
scanf("%d",&celsius);

fahrenhiet=celsius*9/5-32;
printf("fahrenhiet=%d",fahrenhiet);

return 0;
}

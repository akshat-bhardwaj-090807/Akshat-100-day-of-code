#include<stdio.h>
int main()
{
int celcius;
float fahrenhiet;


printf("enter celcius");
scanf("%d",&celcius);

fahrenhiet = (celcius*9/5)+32;
printf("fahrenhiet=%f",fahrenhiet);

return 0;
}

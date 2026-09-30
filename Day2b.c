#include<stdio.h>
int main()
{
double radius,circumference,area;

printf("enter radius");
scanf("%2lf",&radius);

circumference=2*3.14*radius;
printf("circumference=%2lf\n",circumference);

area=3.14*radius*radius;
printf("area=%2lf\n",area);

return 0;
}

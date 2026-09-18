#include<stdio.h>
int main()
{
int Lenght;
int Breadth;
int Area;
int Perimeter;

printf("enter Breadth");
scanf("%d",&Breadth);

printf("enter Lenght");
scanf("%d",&Lenght);

Area = (Lenght*Breadth);
printf("Area = %d\n",Area);

Perimeter = 2*(Lenght+Breadth);
printf("Perimeter=%d\n",Perimeter);

return 0;
}

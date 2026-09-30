#include<stdio.h>
int main()
{
int lenght,breadth,perimeter,area;

printf("enter lenght ");
scanf("%d",&lenght);

printf("enter breadth");
scanf("%d",&breadth);

perimeter = 2*(lenght+breadth);
printf("perimeter=%d\n",perimeter);

area = lenght*breadth;
printf("area+%d\n",area);
return 0;
}

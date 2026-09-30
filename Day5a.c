#include<math.h>
#include<stdio.h>
int main()
{
int p,r,t;
double si,ci;
printf("enter p,r,t");
scanf("%d%d%d",&p,&r,&t);

si=p*r*t/100;
printf("si=%2lf\n",si);

ci = p * pow((1.0 + r / 100.0), t) - p;
printf("ci=%2lf\n",ci);
return 0;
}


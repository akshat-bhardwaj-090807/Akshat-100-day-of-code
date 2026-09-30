#include<stdio.h>
int main()
{
int sec,remaining,hour ,min;

printf("enter time in second");
scanf("%d",&sec);

hour=sec/3600;
remaining=sec%3600;
min=remaining%60;
sec=remaining%60;

printf("%d:%d:%d",hour,min,sec);
return 0;
}



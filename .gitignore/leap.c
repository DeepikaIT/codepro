#include<stdio.h>
int main()
{
int year;
printf("enter a year");
scanf("%d",&year);
if(year%4==0)
{
if(year100%==0)
{
if(year400%==0)
printf("the given year is leap",year);
else
printf("the given year is not leap year",year);
}
return 0;
}
}

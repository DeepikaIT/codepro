#include<stdio.h>
int char ch;
int a;
clrscr();
void main()
{
printf("Print 1 to 5 again and again");
while(1)
{
for(a=1;a<=5;a++)
     printf("%d",a);
    ch=getch();
    if(ch=='Q')
     exit(0);
    }
    getch();
    }

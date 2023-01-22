#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void yum(void);
void main()
{
 clrscr();
 yum();
 getch();
}
void yum()
{
 int i;
 for(i=0;i<=1;i++)
 printf("%d ",rand()%100);
// return 0;
}
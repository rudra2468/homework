#include<stdio.h>
#include<conio.h>
#define myst(a,b,c) a++*++b*++c

void main()
{
 clrscr();
 int a=10,b=5,c=0;
 printf("%d",myst(a,b,c));
 getch();
}
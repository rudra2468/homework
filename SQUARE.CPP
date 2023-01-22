#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 int i,j;
 printf("enter value\n");
 scanf("%d",&i);
 do
 {
  j=i*i;
  printf("%d",j);
 }while(j!=0);


 getch();
}
#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 int i,j;
 printf("ENTER THE NO. HOSE TABLE U WANT :");
 scanf("%d",&i);
 for(j=1;j<11;j++)
 printf("%d * %d = %d\n",i,j,i*j);

 getch();
}
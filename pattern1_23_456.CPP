#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 int i,j,r=1;

 for(i=0;i<=4;i++)
 {
  printf("\n");


  for(j=1;j<=i;j++)
  {
   printf("%d",j);

   printf("%d",r);
   r++;
  }
 }



 getch();
}
#include<stdio.h>
#include<conio.h>

int main()
{
 clrscr();
 int r,i,j,x=0,k;
 printf("ENTER THE NO. OF ROWS U WANT");
 scanf("%d",&r);
 for(i=r;i>=0;i--)
 {
  printf("\n");
  for(j=0;j<=i-1;j++)
  {
   printf(" ");
  }
  for(k=0;k<=x;k++)
  {
   printf("*");
  }
  x++;
 }

 getch();
 return 0;
}
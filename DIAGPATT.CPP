#include<stdio.h>
#include<conio.h>

int main()
{
 clrscr();
 int i,r,j;
 printf("ENTER THE VALUE OF STARS FOR UR SQUARE :");
 scanf("%d",&r);
 for(i=1;i<=r;i++)
 {
  printf("\n");
  for(j=1;j<=r;j++)
  {
   if(i==1||i==r||j==1||j==r-i+1||i==j||j==r)
   printf("*");
   else
   printf(" ");
  }
 }
   getch();
 return 0;
}
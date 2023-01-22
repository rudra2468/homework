#include<stdio.h>
#include<conio.h>

int main()
{
 clrscr();
 int r,i,j;
 printf("ENTER THE NO. OF ROWS");
 scanf("\n%d",&r);
 for(i=0;i<=r;i++)
 {
  for(j=0;j<=r;j++)
  {
   printf("*");
  }
  printf("\n");
 }

 getch();
 return 0;
}

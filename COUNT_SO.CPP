#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 int A[]={1,2,5,1,3,7,9,2,7,8,1};
 int B[11]={0};
 int i,j;
 for(i=0;i<11;i++)
  {
   B[A[i]]=B[A[i]]+1;

  }

 for(i=0;i<10;i++)
 {
  printf("%d %d\n",i,B[i]);
 }

 getch();
}
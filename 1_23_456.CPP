#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 int n,i,j,r=1;
 printf("the amount of standing rows u want\n");
 scanf("%d",&n);
 for(i=0;i<=n;i++)
 {
  printf("\n");


  for(j=1;j<=i;j++)
  {
   printf("%d",j);

  // printf("%d",r);
   r++;
  }
 }



 getch();
}
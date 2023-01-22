#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 int arr[]={1,2,1,3,5,6,7,6,8};
 int b[9];
 int i,j,visited=0;

 for(i=0;i<9;i++)
 {
  int count=1;
  for(j=i+1;j<9;j++)
  {
  if(arr[i]==arr[j])
   {
    count++;
    //to avoid counting same element again
    b[j]=visited;
   }
  }
  if(b[i]!=visited)
    b[i]=count;
 }
 for(i=0;i<9;i++)
 {
  if (b[i]!=visited)
  {
   printf("%d %d\n",arr[i],b[i]);
  }
 }

 getch();
}
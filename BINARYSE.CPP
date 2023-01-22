#include<stdio.h>
#include<conio.h>

int binarysearch(int a[],int start,int end,int val);



void main()
{
 clrscr();
 int a[8]={11,14,25,40,41,52,57,70};//given array
 int val=40;//value to be searched
 int n=8;//size of array porvided
 int res=binarysearch(a,0,n-1,val);//store result
 printf("the elements of the array are : ");
 for(int i=0;i<n;i++)
 {
  printf("%d ",a[i]);
 }
 printf("\nElements to be searched -%d",val);
 if(res==-1)
 {
  printf("\nElement is not present");
 }
 else
 {
  printf("\nElements is present at %d position of array",res);
 }
 getch();
}



int binarysearch(int a[],int start,int end,int val)
{
 int mid;
 if(end>=start)
 {
  mid=(start+end)/2;
  /* if the item to be searched is present at middle */
  if(a[mid]==val)
  {
   return mid+1;
  }
  /* if item to be searched is smaller than mid */
  else if(a[mid]<val)
  {
   return binarysearch(a,mid+1,end,val); /* here function is recalled to check if the next
					    value is small or big than middle */
  }
  /* if the item to be searched is bigger than mid */
  else
  {
   return binarysearch(a,start,mid-1,val);
  }
 }
 return -1;
}


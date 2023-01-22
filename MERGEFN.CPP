#include<stdio.h>
#include<conio.h>

void merge(int *arr1,int *arr2,int *arr3);

void main()
{
 int i;
 int arr1[5]={1,3,5,7,9};
 int arr2[6]={1,2,4,6,8,10};
 int arr3[11]={0};
 clrscr();
 merge(arr1, arr2, arr3);
 for(i=0;i<11;i++)
 {
  printf("%d\n",arr3[i]);
 }
 getch();
}

void merge(int *arr1,int *arr2,int *arr3)
{
 int i=0,j=0,k;
 for(k=0;k<11;k++)
 {
  if(arr1[i]<arr2[j] && i<5)
  {
   arr3[k]=arr1[i];
   i++;
  }
  else
  {
   arr3[k]=arr2[j];
   j++;
  }
 }
}
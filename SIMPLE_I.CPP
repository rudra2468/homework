#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();

 int value,rate,year,simple_interest;
 printf("type the value here \n");
 scanf("%d",&value);
 printf("type the rate of interest here \n");
 scanf("%d",&rate);
 printf("type the no. of year here \n");
 scanf("%d",&year);
 simple_interest=(value*rate*year)/100;


 printf("the interest to pay is %d",simple_interest);

 getch();
}
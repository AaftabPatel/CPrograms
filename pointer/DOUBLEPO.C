#include<stdio.h>
#include<conio.h>
void main()
{
int *p1, **p2;
int n;
clrscr();
printf("please enter the number:");
scanf("%d", &n);
p1=&n;
p2=&p1;
printf("entered number is %d",n );
printf("\naddress of variable using single pointer is: %p", *p1);
printf("\naddress of variable using double pointer is: %p", **p2);
getch();
}
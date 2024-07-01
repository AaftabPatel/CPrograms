#include<stdio.h>
#include<conio.h>
void main()
{
int *p1,*p2,*p3;
int n1,n2,n3;
clrscr();
printf("please enter the first number:");
scanf("%d", &n1);
p1=&n1;
printf("please enter the second number:");
scanf("%d", &n2);
p2=&n2;
printf("please enter the third number:");
scanf("%d", &n3);
p3=&n3;
printf("first number is %d",n1 );
printf("\nentered numbers pointer is: %p", p1);
printf("\nsecond number is %d",n2 );
printf("\nentered numbers pointer is: %p", p2);
printf("\nthird number is %d",n3 );
printf("\nentered numbers pointer is: %p", p3);
getch();
}
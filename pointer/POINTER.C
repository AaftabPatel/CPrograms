#include<stdio.h>
#include<conio.h>
void main()
{
int* p;
int n;
clrscr();
printf("please enter the number:");
scanf("%d", &n);
p=&n;
printf("entered number is %d",n );
printf("\nentered numbers pointer is: %p", p);
getch();
}
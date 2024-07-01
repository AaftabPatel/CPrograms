#include<stdio.h>
#include<conio.h>
void main()
{
int p, r, t, si;
clrscr();
printf("\nplease enter the principle amount:");
scanf("%d", &p);
printf("\nenter the rate:");
scanf("%d", &r);
printf("\nenter the time:");
scanf("%d", &t);
si=(p*r*t)/100;
printf("\nsimple intrest is = %d", si);
getch();
}
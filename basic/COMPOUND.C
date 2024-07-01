#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float p, r, t, ci;
clrscr();
printf("\nplease enter the principle amount:");
scanf("%f", &p);
printf("\nenter the rate:");
scanf("%f", &r);
printf("\nenter the time:");
scanf("%f", &t);
ci=p*(pow((1+r/100),t));
printf("\ncompound intrest is = %f", ci);
getch();
}
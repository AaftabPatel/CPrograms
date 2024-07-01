#include<stdio.h>
#include<conio.h>
void main()
{
float l, b, peri;
clrscr();
printf("\nplease enter the length of rectangle:");
scanf("%f", &l);
printf("\nplease enter the breath of rectangle:");
scanf("%f", &b);

peri=2*(l+b);
printf("\nperimeter is: %f", peri);
getch();
}

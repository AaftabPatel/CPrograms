#include<stdio.h>
#include<conio.h>
void main()
{
float h, b, ar;
clrscr();
printf("\nplease enter the height of triangle:");
scanf("%f", &h);
printf("\nplease enter the base of triangle:");
scanf("%f", &b);

ar=0.5*h*b;
printf("\narea is: %f", ar);
getch();
}

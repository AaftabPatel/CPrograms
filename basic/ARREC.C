#include<stdio.h>
#include<conio.h>
void main()
{
float l, b, ar;
clrscr();
printf("\nplease enter the length of rectangle:");
scanf("%f", &l);
printf("\nplease enter the breath of rectangle:");
scanf("%f", &b);

ar=l*b;
printf("\narea is: %f", ar);
getch();
}

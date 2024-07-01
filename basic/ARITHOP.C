#include<stdio.h>
#include<conio.h>
void main()
{
int n1, n2, sum, sub, mul, div, mod;
clrscr();
printf("\nplease enter the first number:");
scanf("%d", &n1);
printf("\nplease enter the second number:");
scanf("%d", &n2);
sum=n1+n2;
printf("\nsum is: %d", sum);
sub=n1-n2;
printf("\ndiffrence is: %d", sub);
mul=n1*n2;
printf("\nproduct is: %d", mul);
div=n1/n2;
printf("\ndivision is: %d", div);
mod=n1%n2;
printf("\nremainder is: %d", mod);
getch();
}
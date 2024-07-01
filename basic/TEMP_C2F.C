#include<stdio.h>
#include<conio.h>
void main()
{
float c, f;
clrscr();
printf("please enter the temperature in celcius:");
scanf("%f", &c);
f=((9*c)/5)+32;
printf("temperature in farenheit is: %f", f);
getch();
}

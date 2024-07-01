#include<stdio.h>
#include<conio.h>
void main()
{
float c, f;
clrscr();
printf("please enter the temperature in farenheit:");
scanf("%f", &f);
c=((f-32)*5)/9;
printf("temperature in celcius is: %f", c);
getch();
}

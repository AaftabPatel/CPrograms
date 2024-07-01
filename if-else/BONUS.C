#include<stdio.h>
#include<conio.h>
void main()
{
int year, jyear, bonus;
clrscr();
printf("please enter the years of joining:");
scanf("%ld", &jyear);
printf("please enter the current year:");
scanf("%ld", &year);

if((year-jyear)>3)
	printf("bonus of 2500/-");

getch();
}

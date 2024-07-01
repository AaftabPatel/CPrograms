#include<stdio.h>
#include<conio.h>
void main()
{
long int ppi, q, exp;
clrscr();
printf("please enter the price per item:");
scanf("%ld", &ppi);
printf("please enter the quantity:");
scanf("%ld", &q);

if(q>1000)
	{
	exp=(0.9*ppi)*q;
	printf("total expense is: %ld",exp);
	}
else
	{
	exp=ppi*q;
	printf("total expense: %ld", exp);
	}
getch();
}

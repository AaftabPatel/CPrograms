#include<stdio.h>
#include<conio.h>
void fact()
{
int i, n, fact=1;
clrscr();
printf("plese enter the number whose factorial you want:");
scanf("%d", &n);
for(i=1;i<=n;i++)
	fact=fact*i;
printf("%d",fact);
getch();
}
void main()
{
fact();
}
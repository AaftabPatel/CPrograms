#include<stdio.h>
#include<conio.h>
void main()
{
int i=1, n, fact=1;
clrscr();
printf("plese enter the number whose factorial you want:");
scanf("%d", &n);
while(i<=n)
	{
	fact=fact*i;
	i++;
	}
printf("%d",fact);
getch();
}
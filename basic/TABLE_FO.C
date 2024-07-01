#include<stdio.h>
#include<conio.h>
void main()
{
int i, tabl;
clrscr();
printf("plese enter the number whose table you want:");
scanf("%d", &tabl);
for(i=1;i<=10;i++)
	printf("\n %d*%d=%d",tabl,i,i*tabl);
getch();
}
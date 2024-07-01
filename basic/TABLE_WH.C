#include<stdio.h>
#include<conio.h>
void main()
{
int i, tabl;
clrscr();
printf("plese enter the number whose table you want:");
scanf("%d", &tabl);
i=1;
while(i<=10)
	{
	printf("\n %d*%d=%d",tabl,i,i*tabl);
	i++;
	}
getch();
}
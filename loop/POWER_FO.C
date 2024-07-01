#include<stdio.h>
#include<conio.h>
void main()
{
int base, power, res=1, i;
clrscr();
printf("please enter the base:");
scanf("%d", &base);
printf("please enter the power:");
scanf("%d", &power);
for(i=1;i<=power;i++)
	res=res*base;
printf("result is: %d",res);
getch();
}
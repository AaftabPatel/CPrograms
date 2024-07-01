#include<stdio.h>
#include<conio.h>
void main()
{
int sp, cp, p;
clrscr();
printf("please enter the selling price:");
scanf("%d", &sp);
printf("please enter the cost price:");
scanf("%d", &cp);
if (sp==cp)
	printf("no profit no loss");
else if(sp>cp)
	{
	p=sp-cp;
	printf("profit is made of: %d", p);
	}
else
	{
	p=cp-sp;
	printf("loss is made of: %d", p);
	}
getch();
}
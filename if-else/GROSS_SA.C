#include<stdio.h>
#include<conio.h>
void main()
{
float sal, hra, da, g_sal;
clrscr();
printf("please enter the salary:");
scanf("%f", &sal);
if(sal<1500)
	{
	hra=sal*0.1;
	da=sal*0.9;
	}
else
	{
	hra=500;
	da=sal*0.98;
	}
g_sal=sal + hra + da;
printf("gross salary is: %f", g_sal);
getch();
}
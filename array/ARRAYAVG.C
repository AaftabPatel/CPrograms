#include<stdio.h>
#include<conio.h>
void main()
{
int a[10], i, j;
float tot=0, avg=0;
clrscr();
for(j=0;j<10;j++)
	{
	printf("please enter the no. at index %d:",j);
	scanf("%d", &a[j]);
	}
for(i=0;i<10;i++)
	{
	tot+=a[i];
	}
avg=tot/10;
printf("sum of all numbers is: %f", tot);
printf("\naverage of all numbers is: %f", avg);
getch();
}
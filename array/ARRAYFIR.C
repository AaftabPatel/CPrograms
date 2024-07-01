#include<stdio.h>
#include<conio.h>
void main()
{
int a[10], i, j, k=0;
clrscr();
for(j=0;j<10;j++)
	{
	printf("please enter the no. at index %d:",j);
	scanf("%d", &a[j]);
	}
k=a[0]+a[9];
printf("sum of first and last index element are: %d", k);
getch();
}
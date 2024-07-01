#include<stdio.h>
#include<conio.h>
void main()
{
int a[10], i, j;
clrscr();
for(j=0;j<10;j++)
	{
	printf("please enter the no. at index %d:",j);
	scanf("%d", &a[j]);
	}
printf("reversed array is:");
for(i=9;i>=0;i--)
	printf("%d,", a[i]);
getch();
}
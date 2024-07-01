#include<stdio.h>
#include<conio.h>
void main()
{
int i, j, arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int *p=&arr;
clrscr();
for(i=1;i<=9;i++,p++)
	{
	if (i%3==0)
		printf("%d\n", *p);
	else
		printf("%d\t", *p);
	}
getch();
}
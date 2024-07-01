#include<stdio.h>
#include<conio.h>
void main()
{
int i, arr[5]={1,2,3,4,5};
int *p=	arr;
clrscr();
for(i=0;i<5;i++,p++)
	printf("%d\n", *p);
getch();
}
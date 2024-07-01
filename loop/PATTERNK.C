#include<stdio.h>
#include<conio.h>
void main()
{
int j,i,space=0;
char ch;
clrscr();
for(i=5;i>0;i--)
	{
	for(j=0;j<i;j++)
		printf("%d",i);
	for(j=0;j<space;j++)
		printf(" ");
	for(j=0;j<i;j++)
		printf("%d",i);
	printf("\n");
	space+=2;
	}
getch();
}
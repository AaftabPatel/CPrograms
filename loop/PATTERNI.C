#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k;
clrscr();
for (i=5;i>=1;i--)
	{
	for(k=i;k>=1;k--)
		printf("  ");
	for(j=1;j<=i;j++)
		printf("*");
	printf("\n");
	}
getch();
}
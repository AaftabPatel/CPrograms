#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k;
clrscr();
for (i=1 ;i<=5;i++)
	{
	for (k=5;k>=i;k--)
		printf("  ");
	for(j=1;j<=i;j++)
		if(i==4 && j==4)
			printf("  *");
		else
			printf("*");
	printf("\n");
	}
getch();
}
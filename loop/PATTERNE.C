#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k=0;
clrscr();
for (i=5 ;i>=1;i--,k=0)
	{
	for (j=1;j<=5-i;j++)
		printf(" ");
	while(k!=2*i-1)
		{
		printf("*");
		k++;
		}
	printf("\n");
	}
getch();
}
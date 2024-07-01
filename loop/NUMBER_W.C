#include<stdio.h>
#include<conio.h>
void main()
{
int i=1, n;
clrscr();
printf("plese enter the number till you want:");
scanf("%d", &n);
while(i<=n)
	{
	printf("%d\n",i);
	i++;
	}
getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
int i=2, n;
clrscr();
printf("plese enter the number till you want enen numbers:");
scanf("%d", &n);
while(i<=n)
	{
	printf("%d\n",i);
	i=i+2;
	}
getch();
}
#include<stdio.h>
#include<conio.h>
void sumnatural()
{
int i, n, sum=0;
clrscr();
printf("plese enter the number till you want to sum:");
scanf("%d", &n);
for(i=1;i<=n;i++)
	sum=sum+i;
printf("%d",sum);
getch();
}
void main()
{
sumnatural();
}
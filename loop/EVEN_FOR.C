#include<stdio.h>
#include<conio.h>
void main()
{
int i=2, n;
clrscr();
printf("plese enter the number till you want:");
scanf("%d", &n);
for(;i<=n;i=i+2)
	printf("%d\n",i);
getch();
}
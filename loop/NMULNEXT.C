#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,sum=0;
clrscr();
printf("please enter the number till you want th series:");
scanf("%d", &n);
printf("series is:");
for (i=1;i<=n-1;i++)
	{
	sum+=i*(i+1);
	printf("%d * %d+",i ,i+1);
	}
printf("\nsum of series is: %d", sum);
getch();
}
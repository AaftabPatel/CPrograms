#include<stdio.h>
#include<conio.h>
void main()
{
int i, num, count, j;
clrscr();
printf("pleae enter the number till you want series:");
scanf("%d", &num);
for(i=2; i<=num ;i++)
	{
	count=1;
	for (j=2;j<=i/2;j++)
		{
		if (i%j==0)
			{
			count=0;
			break;
			}
		}
		if (count==1)
			printf("%d\n", i);
	}
getch();
}
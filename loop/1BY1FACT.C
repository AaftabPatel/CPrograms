#include<stdio.h>
#include<conio.h>
void main()
{
int n=1, k, num,i;
float sum=0.0,f;
clrscr();
printf("please enter number of terms:");
scanf("%d", &num);
printf("series is:");
while(n<=num)
	{
	f=1;
	for(k=1;k<=n;k++)
		{
		f*=k;
		}
	sum+=n/f;
	i=n;
	printf("%d/!%d+",i,n);
	n++;
	}
printf("\nsum of series is: %f",sum);
getch();
}
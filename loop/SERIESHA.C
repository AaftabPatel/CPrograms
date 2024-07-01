#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int i=1, n;
float sum=0, num, x;
clrscr();
printf("please enter the number till you want th series:");
scanf("%d", &n);
printf("please enter the number whose series you want:");
scanf("%f", &num);
x=((num-1)/num);
printf("series is:");
while(i<=n)
	{
	printf("(%f^%d)+",x,i);
	sum+=pow(x,i);
	i++;
	}
sum*=0.5;
printf("\nsum of series is: %f", sum);
getch();
}
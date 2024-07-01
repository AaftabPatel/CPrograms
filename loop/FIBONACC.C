#include<stdio.h>
#include<conio.h>
void main()
{
int n, t1=0, t2=1, next=0;
clrscr();
printf("pleae enter the number of terms you want in fibonacci seriess:");
scanf("%d", &n);
printf("fibonacci serie: %d,%d",t1,t2);
next=t1+t2;
while(next<=n-1)
	{
	printf(",%d",next);
	t1=t2;
	t2=next;
	next=t1+t2;
	}
getch();
}
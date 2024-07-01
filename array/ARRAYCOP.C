#include<stdio.h>
#include<conio.h>
void main()
{
int a[10], b[10], i, j, k;
clrscr();
for(j=0;j<10;j++)
	{
	printf("please enter the no. at index %d:",j);
	scanf("%d", &a[j]);
	}
for(i=0;i<10;i++)
	b[i]=a[i];
printf("copied array is:");
for(k=0;k<10;k++)
	printf("%d,", b[k]);
getch();
}
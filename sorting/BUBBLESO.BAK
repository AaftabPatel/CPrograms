#include<stdio.h>
#include<conio.h>
void main()
{
int i, j, k, n, s, arr[100];
clrscr();
printf("please entr the number of elements:");
scanf("%d", &n);
for(i=0;i<n;i++)
	{
	printf("enter element at index %d:", i);
	scanf("%d", &arr[i]);
	}
printf("array before sorting:");
for(k=0;k<n;k++)
	printf("%d,", arr[k]);
for(j=0;j<n;j++)
{
for(i=0;i<n;i++)
	{
	if(arr[i]>arr[i+1])
		{
		s=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=s;
		}
	}
}
printf("\narray after sorting:");
for(k=0;k<n;k++)
	printf("%d,", arr[k]);

getch();
}
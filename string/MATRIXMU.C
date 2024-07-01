#include<stdio.h>
#include<conio.h>
void main()
{
int i, j, k, n=0, a[3][3], b[3][3], res[3][3];
clrscr();
printf("pleas	e eneter the elements of the first matrix:\n");
for(j=0;j<3;++j)
	{
	for(i=0;i<3;++i)
		{
		printf("enter element a%d%d:", j+1, i+1);
		scanf("%d", &a[j][i]);
		}
	}
printf("please eneter the elements of the second matrix:\n");
for(j=0;j<3;++j)
	{
	for(i=0;i<3;++i)
		{
		printf("enter element b%d%d:", j+1, i+1);
		scanf("%d", &b[j][i]);
		}
	}
for(j=0;j<3;++j)
	{
	for(i=0;i<3;++i)
		{
		n=0;
		for(k=0;k<3;++k)
			{
			n+=a[j][k]*b[k][i];
			}
		res[j][i]=n;
		}
	}
for(j=0;j<3;++j)
	{
	for(i=0;i<3;++i)
		{
		printf("%d  ", res[j][i]);
		if(i==2)
			{
			printf("\n\n");
			}
		}
	}

getch();
}
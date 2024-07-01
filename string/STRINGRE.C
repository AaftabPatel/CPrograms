#include<stdio.h>
#include<conio.h>
void main()
{
char str[100];
int i,len;
clrscr();
printf("plese enter the string you want to reverse:");
gets(str);
len=strlen(str);
printf("reversed string is:");
for(i=len-1;i>=0;i--)
	{
	printf("%c",str[i]);
	}
getch();
}
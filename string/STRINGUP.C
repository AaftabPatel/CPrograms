#include<stdio.h>
#include<conio.h>
void main()
{
char str[100];
int i;
clrscr();
printf("plese enter the string you want to convert in upper case:");
gets(str);
for(i=0;str[i]!='\0';++i)
	{
	if(str[i]>='a' && str[i]<='z')
		str[i]-=32	;
	}
printf("uppered string is: %s", str);
getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
char str[100];
int i;
clrscr();
printf("plese enter the string you want to convert in lower case:");
gets(str);
for(i=0;str[i]!='\0';++i)
	{
	if(str[i]>='A' && str[i]<='Z')
		str[i]+=32;
	}
printf("lowered string is: %s", str);
getch();
}
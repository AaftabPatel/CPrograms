#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[100];
int i,len,space=0;
clrscr();
printf("plese enter the string:");
gets(str);
len=strlen(str);
printf("reversed string is:");
for(i=0;i<=len;i++)
	{
	if(str[i]==' ')
		space+=1;
	}
printf("number of spaces in the given string\n%s is: %d",str,space);
getch();
}
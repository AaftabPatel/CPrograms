#include<stdio.h>
#include<conio.h>
void main()
{
char str1[100],str2[100];
int i,len;
clrscr();
printf("plese enter the first string:");
gets(str1);
printf("plese enter the second string:");
gets(str2);
for(i=0;str2[i]!='\0';++i,++len)
	str1[len]=str2[i];
str1[len]='\0';
printf("\nconcatinated string is: %s", str1);
getch();
}
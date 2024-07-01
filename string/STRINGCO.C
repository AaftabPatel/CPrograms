#include<stdio.h>
#include<conio.h>
void main()
{
char str1[100],str2[100];
int i;
clrscr();
printf("plese enter the string:");
gets(str1);
for(i=0;str1[i]!='\0';++i)
	str2[i]=str1[i];
str2[i]='\0';
printf("original string is: %s", str1);
printf("\ncopied string is: %s", str2);
getch();
}
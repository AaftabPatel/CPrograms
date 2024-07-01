#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char l,str[100];
int i,len,count=0;
clrscr();
printf("plese enter the string:");
gets(str);
printf("please enter the letter to count:");
scanf("%c", &l);
len=strlen(str);
printf("reversed string is:");
for(i=0;i<=len;i++)
	{
	if(str[i]==l)
		count+=1;
	}
printf("number of %c in the given string\n%s is: %d",l,str,count);
getch();
}
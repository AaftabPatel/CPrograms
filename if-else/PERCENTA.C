#include<stdio.h>
#include<conio.h>
void main()
{
float sub1, sub2, sub3, sub4 ,sub5, per;
clrscr();

printf("please enter the marks of subject1:");
scanf("%f", &sub1);

printf("please enter the marks of subject2:");
scanf("%f", &sub2);

printf("please enter the marks of subject3:");
scanf("%f", &sub3);

printf("please enter the marks of subject4:");
scanf("%f", &sub4);

printf("please enter the marks of subject5:");
scanf("%f", &sub5);

per=(sub1+sub2+sub3+sub4+sub5)/5;
if(per>=60)
	printf("passed in first division with: %f", per);

else
	{
	if(per>=50)
		printf("passed in second division with: %f", per);

	else
		{
		if(per>=40)
			printf("passed in third division with: %f", per);

		else
			printf("failed with: %f", per);
		}
	}
getch();
}
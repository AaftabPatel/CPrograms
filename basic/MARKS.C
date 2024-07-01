#include<stdio.h>
#include<conio.h>
void main()
{
int eng, hin, math, phy, chem, marks, per;
clrscr();
printf("\nplease enter englih marks:");
scanf("%d", &eng);
printf("\nplease enter hindi marks:");
scanf("%d", &hin);
printf("\nplease enter maths marks:");
scanf("%d", &math);
printf("\nplease enter physics marks:");
scanf("%d", &phy);
printf("\nplease enter chemistry marks:");
scanf("%d", &chem);
marks=eng+hin+math+phy+chem;
printf("\ntotal marks: %d", marks);
per=marks/5;
printf("\npercenage is: %d", per);
getch();
}
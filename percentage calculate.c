#include<stdio.h>
#include<conio.h>
void main()
{
	float h,m,e,s,ma,per=0,mark=0;
	clrscr();
	printf("\nEnter The Hindi Marks : ");
	scnaf("%f",&h);
	printf("\nEnter The Marathi Marks : ");
	scanf("%f",&m);
	printf("\nEnter The English marks : ");
	scanf("%f",&e);
	printf("\nEnter The Sic Marks : ");
	scanf("%f",&s);
	printf("\nEnter The Math Marks : ");
	scanf("%f",&ma);
	mark = h+m+e+s+ma;
	printf("\nAddition=",mark);
	per= mark/5;
	printf("per=%f",per);
	if (per>35)
	{
		printf("\nStudent Is Falid..");
	}
	else
	{
		printf("\nStudent Is Pass..");
	}
	getch();r
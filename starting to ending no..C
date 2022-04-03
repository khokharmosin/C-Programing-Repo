#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,i;
	clrscr();
	printf("\nEnter The Starting Number : ");
	scanf("%d",&a);
	printf("\nEnter The Ending Number : ");
	scanf("%d",&b);
	for(i=a;i<=b;i++)
	{
		printf("\n%d",i);
	}
	for(i=a;i>=b;i--)
	{
		printf("\n%d",i);
	}
	getch();
}
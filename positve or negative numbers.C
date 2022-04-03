#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("\nEnter The Value : ");
	scanf("%d",&a);
	if(a>=1)
	{
		printf("\nGiven Value Is Positve.");
	}
	else
	{
		printf("\nGiven Value Is Negative. ");
	}
	getch();

}
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i,temp=1;
	clrscr();
	printf("\nEnter The Any Number : ");
	scanf("%d",&a);
	if(a==1)
	{
		temp=1;
	}
	else
	{
		for(i=2;i<a;i++)
		{
			if(a%i==0)
			{
				temp=0;
				break;
			}
		}
		if(temp==1)
		{
			printf("\nGiven No Is Prime No.");
		}
		else
		{
			printf("\nGiven No Is Not Prime No.");
		}
	}
	getch();
}
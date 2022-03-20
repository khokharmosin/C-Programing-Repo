#include<stdio.h>
#include<conio.h>
void main()
{
	int a[2][2],r,c,b[2][2],m,s;
	clrscr();
	printf("\nEnter the First 2*2 Matrix : ");
	for(r=0;r<=1;r++)
	{
		for(c=0;c<=1;c++)
		{
			scanf("%d",&a[r][c]);
		}
	}
	printf("\nEnter The Second 2*2 Matrix : ");
	for(m=0;m<=1;m++)
	{
		for(s=0;s<=1;s++)
		{
			scanf("%d",&b[m][s]);
		}
	}
	printf("\nThe First 2*2 Matrix Is :\n");
	for(r=0;r<=1;r++)
	{
		for(c=0;c<=1;c++)
		{
			printf("\t%d",a[r][c]);
		}
		printf("\n");
	}
	printf("\nThe Second 2*2 Matrix Is :\n");
	for(m=0;m<=1;m++)
	{
		for(s=0;s<=1;s++)
		{
			printf("\t%d",b[m][s]);
		}
		printf("\n");
	}
	getch();
}
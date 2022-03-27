#include<Stdio.h>
#include<conio.h>
void main()
{
	int no;
	clrscr();
	printf("\nEnter the Number : ");
	scanf("%d",&no);
	if(no%2==0&&no%5==0)
	{
		 printf("\nNumber Is Divisible By 2 & 5 ");
	}
	else
	{
		printf("\nNumber Is Not Divisible By 2 & 5 ");
	}
	getch();
}
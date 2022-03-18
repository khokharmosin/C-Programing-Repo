#include<stdio.h>
#include<conio.h>
void add();
void sub();
void mult();
void div();
void main()
{
	int opno;
	clrscr();
	printf("\n**CALCULATION**");
	printf("\n1 :ADDITION");
	printf("\n2 :SUBSTRACTION");
	printf("\n3 :MULTIPICATION");
	printf("\n4 :DIVISION");
	printf("\n5 :BYE BYE!!!");
	printf("\nEnter The Opreation Number : ");
	scanf("%d",&opno);
	switch(opno)
	{
		case 1:
			add();
		break;
		case 2:
			sub();
		break;
		case 3:
			mult();
		break;
		case 4:
			div();
		break;
		case 5 :
			printf("\nBye Bye!!!");
		break;
		default:
			printf("\nEnter The Valied No : ");
		break;
	}
	getch();
}
void add()
{
	int a,b,c=0;
	printf("\nEnter The Two No : ");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("\nAddition:%d",c);
}
void sub()
{
	int a,b,c=0;
	printf("\nEnter The Two No : ");
	scanf("%d %d",&a,&b);
	c=a-b;
	printf("\nSubstraction:%d",c);
}
void mult()
{
	int  a,b,c=0;
	printf("\nEnter The Two No : ");
	scanf("%d %d",&a,&b);
	c=a*b;
	printf("\nMultiplication:%d",c);
}
void div()
{
	int a,b,c=0;
	printf("\nEnter The Two No : ");
	scanf("%d %d",&a,&b);
	c=a/b;
	printf("\nDivision:%d",c);
}
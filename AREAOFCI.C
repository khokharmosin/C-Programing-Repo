#include<stdio.h>
#include<conio.h>
void tri();
void cir();
void main()
{
	int opno;
	clrscr();
	printf("\n1:Area Of Circle");
	printf("\n2:Area Of Triangle");
	printf("\n3:Exit");
	printf("\nEnter The Operation No :");
	scanf("%d",&opno);
	switch(opno)
	{
		case 1:
			tri();
		break;
		case 2:
			cir();
		break;
		case 3:
			printf("\nBye Bye..");
		break;
		default:
			printf("\nEnter Valid No:");
		break;

	}
	getch();
}
void tri()
{
	int b,h;
	float a;
	printf("\nEnter The Base & Height :");
	scanf("%d %d",&b,&h);
	a=0.5*b*h;
	printf("\nArea Of Triangle Is :%f",a);
}
void cir()
{
	int r;
	float a;
	printf("\nEnter The Redius of Circle:");
	scanf("%d",&r);
	a=3.14*r*r;
	printf("\nArea of Circle Is :%f",a);
}
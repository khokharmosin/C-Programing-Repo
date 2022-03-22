#include<stdio.h>
#include<conio.h>
void main()
{
	int ono,quantity,bill=0;
	clrscr();
	printf("\n***MENU***");
	printf("\n1:Ice-Cream=Rs30");
	printf("\n2:Cone=Rs40");
	printf("\n3:Pestries=Rs50");
	printf("\n4:Exit");
	printf("\nEnter The Order No : ");
	scanf("%d",&ono);
	if(ono==1)
	{
		printf("\nYour Order Is ice-Cream.");
		printf("\nEnter Quantity:");
		scanf("%d",&quantity);
		bill=30*quantity;
		printf("\nYour Bill Is :%d",bill);
	}
	else if(ono==2)
	{
		printf("\nYour Order Is Cone.");
		printf("\nEnter Quantity:");
		scanf("%d",&quantity);
		bill=40*quantity;
		printf("\nYour Bill Is :%d",bill);
	}
	else if(ono==3)
	{
		printf("\nYour Order Is Pestries.");
		printf("\nEnter Quantity:");
		scanf("%d",&quantity);
		bill=50*quantity;
		printf("\nYour Bill Is :%d",bill);
	}
	else if(ono==4)
	{
		printf("\nBye Bye!!!");
	}
	else
	{
		printf("\nEnter Valid No..");
	}
	getch();
}



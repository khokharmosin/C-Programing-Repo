#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char pass1[20],pass2[20];
	int l;
	clrscr();
	printf("\nEnter The Mobile Numbers:-");
	scanf("%s",&pass1);
	printf("\nEnter The OTP:-");
	scanf("%s",&pass2);
	l=strlen(pass2);
	if(l==4 && strcmp(pass2,"1234")==0)
	{
		printf("\nWelcome Admin..");             

	}
	else
	{
		printf("\nInvalied OTP..");
	}
	getch();
}
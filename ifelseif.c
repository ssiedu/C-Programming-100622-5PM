#include<stdio.h>
void main()
{
	int a,b,c;
	printf("\n Enter the value of a :");
	scanf("%d",&a);
	printf("\n Enter the value of b : ");
	scanf("%d",&b);
	printf("\n Enter the value of c : ");
	scanf("%d",&c);
	
	if(a>b && a>c)
	{
		printf("\n Largest number is a : %d",a);
	}
	else if(b>c)
	{
		printf("\n Largest number is b : %d",b);	
	}
	else
	{
		printf("\n Largest number is c : %d",c);
	}
	getch();
	
	
}

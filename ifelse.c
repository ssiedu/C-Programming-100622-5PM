#include<stdio.h>
void main()
{
	int num1,num2;
	printf("\n Enter number1 : ");
	scanf("%d",&num1);
	printf("\n Enter Number2 : ");
	scanf("%d",&num2);
	
	
	if(num1>num2)
	{
		printf("\n Largest number is = %d ",num1);
	}
	else
	{
		printf("\n Largest Number is = %d",num2);
	}
	getch();
}

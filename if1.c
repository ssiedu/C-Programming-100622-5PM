#include<stdio.h>
void main()
{
	int age;
	printf("\n Enter age : ");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("\n person is elligible for vote ");
	}
	else
	{
		printf("\n person is not elligible for vote");
	}
	
	getch();
	
}

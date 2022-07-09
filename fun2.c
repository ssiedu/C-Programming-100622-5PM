//function without arguments and without return value
#include<stdio.h>
void add();   // function declaration

void main()
{
	add(); //function call
	getch();
}
void add()
{
	int a,b;
	printf("\n Enter the value of a and b : ");
	scanf("%d%d",&a,&b);
	printf("\n sum is : %d",a+b);
}

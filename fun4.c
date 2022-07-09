//function without argument and with return value
#include<stdio.h>
int add();

void main()
{
//	int res;
	//res=add();
	printf("\n sum is : %d",add());
	getch();
}
int add()
{
	int a,b;
	printf("\n Enter the value of a and b : ");
	scanf("%d%d",&a,&b);
	return a+b;
	
}

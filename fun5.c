//function with argument and with return value
#include<stdio.h>
int add(int a, int b);  // a and b are formal arguments
void main()
{
	int x,y,res;// actual argument
	printf("\n Enter the value of x and y : ");
	scanf("%d%d",&x,&y);
	res=add(x,y);
	printf("\n sum is : %d",res);
	getch();
}
int add(int a , int b)
{
	int c;
	c=a+b;
	return c;
}

#include<stdio.h>
int fact(int n);
void main()
{
	int num,res;
	printf("\n Enter Number :-");
	scanf("%d",&num);
	res = fact(num);
	printf("\n factorial of %d is : %d",num,res);
	getch();
	
}
int fact(int n)
{
	if(n==0)//5==0//4==0
	return 1;
	else
	return n*fact(n-1);
	//5*fact(4)//5*4*fact(3)//5*4*3*fact(2)//5*4*3*2*1*fact(0)
}

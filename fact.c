#include<stdio.h>
void main()
{
	int num,i,fact=1;
	printf("\n Enter Number :-");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact = fact*i;//1*1 =1 //1*2=2 // 2*3=6 //6*4=24//24*5=120
	}
	printf("\n factorial of %d is : %d",num,fact);
	getch();
}

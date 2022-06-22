#include<stdio.h>
void main()
{
	int a=10,b=5;
	
	printf("\n sum : %d" , a+=b);  //a=a+b  // a=15
	printf("\n sub : %d" , a-=b);  // a=a-b  //a=10
	printf("\n mul : %d" , b*=2);  // b=b*2  //b=10
	printf("\n div : %d" , b/=a);  // b=b/a // 10/10//1
	getch();
}

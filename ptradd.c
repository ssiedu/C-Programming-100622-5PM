#include<stdio.h>
void main()
{
	int a=10;
	int b = 20;
	int *ptr1 = &a;
	int *ptr2 = &b;
	
	printf("\n previous address : %u \t % u ", ptr1 ,ptr2);
	
	ptr1 = ptr1 - ptr2;
	
	printf("\n ptr 1 is : %u ", ptr1);
	getch();
}

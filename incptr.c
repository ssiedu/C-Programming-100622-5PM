#include<stdio.h>
void main()
{
	int num =30;
	int *ptr = &num;
	
	printf("\n Befor increment the address of pointer : %u ",ptr);
	
	ptr = ptr-1;
	
	printf("\n after increment the address of ptr : %u",ptr);
	getch();
}

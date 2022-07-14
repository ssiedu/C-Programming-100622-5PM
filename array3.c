#include<stdio.h>
void main()
{
	int a[5] = {10,20,30,40,50};
	int i;
	printf("\n Elements are : \n");
	for(i=0;i<5;i++)
	{
		printf("\n a[%d] : %d",i,a[i]);
	}
	getch();
}

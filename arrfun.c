#include<stdio.h>
void getarray(int a[])
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("\n %d",a[i]);
	}
}
void main()
{
	int arr[5] = {1,2,3,4,5};
	getarray(arr);
	getch();
}

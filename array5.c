#include<stdio.h>
void main()
{
	int a[25];
	int i,n;
	printf("\n How many elements u want to enter in array :\n");
	scanf("%d",&n);
	
	printf("\n Enter array elements :\n");
	for(i=0;i<n;i++)
	{
		printf("\n a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n Array elements are :\n");
	for(i=0;i<n;i++)
	{
		printf("\n a[%d] : %d",i,a[i]);
	}
	getch();	
}

#include<stdio.h>
void main()
{
	int a[15];
	int i,j,n,temp;
	
	printf("\n Enter array size : ");
	scanf("%d",&n);
	
	printf("\n Enter array elements :\n ");
	for(i=0;i<n;i++)
	{
		printf("\n a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	printf("\n array sorting  : \n");
	for(i=0;i<n;i++)
	{
		printf("\n a[%d] : %d",i,a[i]);
	}
	getch();
	
	
	
}

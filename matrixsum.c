#include<stdio.h>
void main()
{
	int a[5][5],b[5][5],sum[5][5];
	int i,j,r,c;
	
	printf("\n Enter row size : ");
	scanf("%d",&r);
	printf("\n Enter column size : ");
	scanf("%d",&c);
	
	printf("\n Enter first matrix element : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n Enter second matrix element : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum[i][j] = a[i][j]+b[i][j];
		}
	}
	
	
	printf("\n sum of Matrix is :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t%d",sum[i][j]);
		}
		printf("\n\n");
	}
	getch();
	
		
}

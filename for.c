#include<stdio.h>
void main()
{
	int i,n,s;
	printf("\n Enter End Limit : ");
	scanf("%d",&n);
	printf("\n Enter start limit : ");
	scanf("%d",&s);
	
	printf("\n Numbers are : \n");
	for(i=s;i<=n;i++)
	{
		printf("\t%d",i);
	}
	getch();
}

#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,n,*ptr,sum=0;
	
	printf("\n Enter the number of elements : ");
	scanf("%d",&n);
	ptr = (int*)calloc(n,sizeof(int));
	if(ptr==NULL)
	{
		printf("\n Sorry! unable to allocate memory ");
		exit(0);
	}
	printf("\n Enter Array Elements : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
		sum = sum + *(ptr+i);
	}
	printf("\n sum of array elements : %d",sum);
	free(ptr);
	getch();
}

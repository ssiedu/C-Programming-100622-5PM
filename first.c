#include<stdio.h>
void main()
{
	float a,b;
	float sum;
	printf("\n Enter the value of a and b: ");
	scanf("%f%f",&a,&b);
	/*printf("\n Enter the value of b : ");
	scanf("%d",&b);*/
	sum=a+b;
	printf("\n sum is : %.2f",sum);
	getch();
}

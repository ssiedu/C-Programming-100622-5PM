#include<stdio.h>
void main()
{
	FILE *fp;
	int id;
	char name[20];
	float sal;
	fp=fopen("emp.txt","a+");
	if(fp==NULL)
	{
		printf("\n file does not exist ");
		return ;
	}
	printf("\n Enter Emp Id : ");
	scanf("%d",&id);
	fprintf(fp,"Id is : %d\n",id);
	printf("\n Enter Emp Name : ");
	scanf("%s",&name);
	fprintf(fp,"Name is : %s\n",name);
	printf("\n Enter Emp salary : ");
	scanf("%f",&sal);
	fprintf(fp,"Salary is : %.2f\n",sal);
	fclose(fp);
	getch();
	
	
	
}

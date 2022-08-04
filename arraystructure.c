#include<stdio.h>
struct employee
{
	int id;
	char name[20];
	float sal;
}e1[3];
void main()
{
	//struct employee e1;
	int i;
	printf("\n Enter the details of employee : \n");
	for(i=1;i<=3;i++)
	{
		
  printf("\n Enter Emp Id : ");
  scanf("%d",&e1[i].id);
  printf("\n Enter Emp Name : ");
  scanf("%s",&e1[i].name);
  printf("\n Enter Emp Salary : ");
  scanf("%f",&e1[i].sal);
}
  printf("\n\n Details of employee :\n\n");
  for(i=1;i<=3;i++)
  {
  
  printf("\n\n Emp Id : %d",e1[i].id);
  printf("\n\n Emp Name : %s",e1[i].name);
  printf("\n\n Emp Salary : %.2f",e1[i].sal);
}
  getch();	
}

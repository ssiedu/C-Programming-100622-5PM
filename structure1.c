#include<stdio.h>
#include<string.h>
struct employee
{
	int id;
	char name[10];
	float sal;
}e1,e2;
void main()
{
	//struct employee e1;
	e1.id = 101;
	strcpy(e1.name,"Aman");
	e1.sal = 45000.23;
	e2.id = 102;
	strcpy(e2.name,"Ram");
	e2.sal = 45000.23;
	
	printf("\n Employee Id : %d",e1.id);
	printf("\n Employee Name: %s",e1.name);
	printf("\n Employee salary : %.2f",e1.sal);
	printf("\n Employee Id : %d",e2.id);
	printf("\n Employee Name: %s",e2.name);
	printf("\n Employee salary : %.2f",e2.sal);
	
	getch();
}

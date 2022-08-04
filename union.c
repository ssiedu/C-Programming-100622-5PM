#include<stdio.h>
#include<string.h>
union Data
{
	int i;
	char name[10];
	float f;
};
void main()
{
	union Data d;
	 //printf("\n union data size : %d",sizeof(d));
	 d.i = 12;
	 printf("\n int value : %d",d.i);
	 strcpy(d.name,"Ram");
	 printf("\n char value : %s",d.name);
	 d.f=12.33;
	 printf("\n float value : %.2f",d.f);
	 
	 getch();
}

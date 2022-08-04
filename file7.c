#include<stdio.h>
void main()
{
	FILE *fp;
	int len;
	fp=fopen("myfile1.txt","r");
	fseek(fp,0,SEEK_END);
	len = ftell(fp);
	fclose(fp);
	printf("\n Length of file %d bytes",len);
	getch();
}

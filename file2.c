#include<stdio.h>
void main()
{
	FILE *fp;
	char text[30];
	fp = fopen("myfile1.txt","r");
	while(fscanf(fp,"%s",text)!=EOF)
	printf(" %s",text);
	fclose(fp);
	getch();
}

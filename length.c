#include<stdio.h>
void main()
{
	char ch[11] = "ssidigital";
	int i=0;
	int count =0;
	while(ch[i]!='\0')
	{
		if(ch[i]=='a' || ch[i]=='e' || ch[i]=='o' || ch[i]=='i' ||ch[i]=='u')
		{
			count++;
		}
		i++;
	}
	printf("\n total number of vowels : %d",count);
getch();
}




#include<stdio.h>
void main()
{
	char ch;
	printf("\n Enter your chioce in the form of alphabet : ");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'a': //printf("Vowel");
				  //break;
		case 'e': //printf("Vowel");
				  //break;
		case 'i': //printf("Vowel");
				  //break;
		case 'o': //printf("Vowel");
				  //break;
		case 'u': printf("Vowel");
				  break;
		default : printf("Consonant");
				  break;
	}
	getch();
}

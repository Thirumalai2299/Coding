#include<stdio.h>
int main()
{
	char ch;

	printf("Enter a character to check vowel or not :\n");
	scanf("%c",&ch);

	switch(ch)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
			printf("The character %c is a Vowel\n",ch);
			break;
		default :
			printf("The character %c is not a vowel\n",ch);
			break;
	}

	return 0;
}


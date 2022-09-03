#include<stdio.h>
#include<ctype.h>

int main()
{
	char ch;

	printf("Enter a character to reverse : \n");
	ch=getchar();

	printf("The character %c is reversed to ",ch);
	if(islower(ch))
		putchar(toupper(ch));
	else
		putchar(tolower(ch));

	putchar('\n');
	return 0;
}



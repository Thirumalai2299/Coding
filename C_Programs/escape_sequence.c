#include<stdio.h>

int main()
{
	int a,b;
	char* ch;

	printf("This program is for Escape sequences\n");

	//First escape sequence is /a
	printf("This statement is for a escape seq... \a");
	
	//Next /b
	printf("\nHello, testing \t the escape sequences\"\\ \0 null");

	//octal and hexa escape sequence
	ch="Hi\078";
	printf("\nOctal value is %s",ch);

	//Hexa
	ch="hi\x7a";
	printf("\nHexa value is %s",ch);

	return 0;
}

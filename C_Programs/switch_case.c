#include<stdio.h>
int main()
{
	char ch;

	printf("Enter your grade : \n");
	scanf("%c",&ch);

	switch(ch)
	{
		case 'A':
			printf("Excellent \n");
			break;
		case 'B':
			printf("Very Good \n");
			break;
		case 'C':
			printf("Good \n");
			break;
		case 'D':
			printf("Need to improve\n");
			break;
		case 'E':
			printf("Poor \n");
			break;
		default :
			printf("Fail...\n");
			break;
	}

	return 0;
}


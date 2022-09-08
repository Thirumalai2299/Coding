#include<stdio.h>

int main()
{
	int num;

	printf("Enter a number:\n");
	scanf("%d",&num);

	if(num%2==0)
		printf("The number %d is an even number\n",num);
	else
		printf("The number %d is an odd number\n",num);

	return 0;
}
	

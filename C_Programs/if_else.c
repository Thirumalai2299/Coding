#include<stdio.h>
int main()
{
	int i;

	printf("Enter a number:\n");
	scanf("%d",&i);

	if(i>100)
	{
		printf("%d is greater than 100\n",i);
	}
	else if(i==100)
	{
		printf("%d is equal to 100\n",i);
	}
	else
	{
		printf("%d is less than 100\n",i);
	}

	return 0;
}


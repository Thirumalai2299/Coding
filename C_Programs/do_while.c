#include<stdio.h>

int main()
{
	int n,i=0;

	printf("Enter a number : \n");
	scanf("%d",&n);

	do
	{
		printf("i=%d\n",i);
		i++;
	}
	while(i<n);

	return 0;

}

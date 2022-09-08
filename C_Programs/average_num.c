#include<stdio.h>

int main()
{
	int num,sum=0,i,n;

	printf("Enter the total numbers\n");
	scanf("%d",&n);

	printf("Enter the numbers one by one to calculate average\n");

	for(i=0;i<n;i++)
	{
		scanf("%d",&num);
		sum=sum+num;
	}

	printf("The sum is %d\n",sum);

	printf("The average is %d\n",sum/n);

	return 0;
}

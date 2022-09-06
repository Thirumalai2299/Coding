#include<stdio.h>

int main()
{
	int num,rem=0,sum=0;

	printf("Enter a number : \n");
	scanf("%d",&num);

	while(num!=0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("Sum is %d\n",sum);
	return 0;
}


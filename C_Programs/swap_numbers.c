#include<stdio.h>

void swap_using_three_variables(int,int);
void swap_using_addition(int,int);
void swap_using_bitwise(int,int);

void swap_using_three_variables(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;

	printf("Swapped two numbers, now a=%d and b=%d\n",a,b);
}

void swap_using_addition(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;

	printf("Swapped two numbers, now a=%d and b=%d\n",a,b);
}

void swap_using_bitwise(int a,int b)
{
	a=a^b;
	b=a^b;
	a=a^b;

	printf("Swapped two numbers, now a=%d and b=%d\n",a,b);
}

int main()
{
	int a,b;

	//This program deals with swapping of two numbers in different ways
	printf("Enter two number: \n");
	scanf("%d%d",&a,&b);

	swap_using_three_variables(a,b);
	swap_using_addition(a,b);
	swap_using_bitwise(a,b);

	return 0;
}

	



#include<stdio.h>
int main()
{
	int a,b;
	float c,d;
	char e,g,h;

	printf("\nThis program is about getting inputs from user\n");

	//integer input from user
	printf("Enter two integer numbers : \n");
	scanf("%d%d",&a,&b);
	printf("Sum of two integer numbers = %d\n",a+b);

	//Float type input from user
	printf("Enter two decimal(float) numbers : \n");
	scanf("%f%f",&c,&d);
	printf("Sum of two float numbers = %f",c+d);
	//Format specifier for float numbers 
	printf("\nSum of float numbers (formatted) = %0.2f",c+d);

	//Char type input from user(using scanf)
	printf("\nEnter a character :");
	scanf(" %c",&e);
	printf("\nThe character you entered is : %c",e);

	//Char type input from user(using getchar())
	printf("\nEnter a character :");
	fflush(stdin);
	g = getchar();
	printf("The Entered character is : ");
	putchar(g);

	return 0;
}

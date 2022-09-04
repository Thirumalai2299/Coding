#include<stdio.h>
#define VAL 4
#define add(a,b) a*b
#define print(n)	\
	for(int i=0;i<n;i++){	\
	       printf("Number is %d\n",i); \
	}		

int main()
{
	int a,b;
	printf("Enter two numbers to multiply : \n");
	scanf("%d%d",&a,&b);

	printf("Result is : %d\n",add(a,b));
#if VAL==5
	printf("ifdef");
	print(b);
#endif
	return 0;
}



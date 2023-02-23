#include<stdio.h>
main()
{
	int add,sub,mul,div,mod,a,b;
	printf("first value is a:");
	scanf("%d",&a);
	
	printf("second value is b:");
	scanf("%d",&b);
	
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	mod=a%b;
	
	printf("\nthe addition of teo number is %d, add");
	printf("\nthe subtraction of two number is %d, sub ");
	printf("\nthe multiplication of two number is %d ,mul");
	printf("\nthe divison of two number is %d, div");
	printf("\nthe modulo of two number is %d,mod");	
}

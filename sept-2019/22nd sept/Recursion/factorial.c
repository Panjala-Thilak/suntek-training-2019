#include<stdio.h>
long fact(long n)
{
	if(n>=1)
	return n*fact(n-1);
	else
	return 1;
}
int main()
{
	long num;
	printf("enter a number : ");
	scanf("%ld",&num);
	printf("the factorial of %ld is %ld",num,fact(num));
	return 1;
}
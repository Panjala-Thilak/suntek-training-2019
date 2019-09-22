//iterative method
#include<stdio.h>
int main()
{
	long long fact=1,i;
	long num;
	printf("enter a number : ");
	scanf("%ld",&num);
	for(i=1;i<=num;i++)
	fact=fact*i;
	printf("the factorial of %ld is %ld",num,fact);
	return 1;
}
/*OUTPUT
enter a number : 25
the factorial of 25 is 2076180480
*/
#include<stdio.h>
#include<math.h>
int main()
{
		long num,i;
	printf("enter a number : ");
	scanf("%ld",&num);
	int n=num/2;
	for(i=2;i<=n;i++)
	{
		if(num%i==0)
		{
		break;
	}
	}
	if(i==n)
	printf(" %d is a Prime number ",num);
	else
	printf(" %d is a not Prime number ",num);
	return 0;
}
/*OUTPUT
enter a number : 8
 8 is a not Prime number
 */
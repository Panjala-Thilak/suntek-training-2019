#include<stdio.h>
int main()
{
		long num,i;
	printf("enter a number : ");
	scanf("%ld",&num);
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		break;
	}
	if(i==num)
	printf(" %d is a Prime number ",num);
	else
	printf(" %d is a not Prime number ",num);
	return 0;
}
/*OUTPUT
enter a number : 17
 17 is a Prime number
 */
//iterative method 
#include<stdio.h>
int main()
{
	int base,power,res=1,i;
	printf("enter the base and power ");
	scanf("%d %d",&base,&power);
	for(i=1;i<=power;i++)
	res=res*base;
	printf("the result is %d",res);
	return 1;
}
/*OUTPUT
enter the base and power 3 8
the result is 6561
*/
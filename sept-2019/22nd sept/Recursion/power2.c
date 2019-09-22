//recursion method 
#include<stdio.h>
int powerf(int b,int p)
{
	if(p!=0)
	return b*powerf(b,p-1);
	else
	return 1;
 } 
int main()
{
	int base,power,res=1,i;
	printf("enter the base and power ");
	scanf("%d %d",&base,&power);
	printf("the result is %d",powerf(base,power));
	return 1;
}
/*OUTPUT
enter the base and power 5 5
the result is 3125
*/
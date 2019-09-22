//Iterative method
#include<stdio.h>
int fib(int);
int main()
{
   int n,i,c;
   int a=0,b=1;
   printf("enter the number ");
   scanf("%d",&n); 
   printf("Fibonacci series\n");
 	for(i=0;i<=n;i++)
   {
   	if(i<=1)
   	c=i;
   	else
   	{
   		c=a+b;
   		a=b;
   		b=c;
   }
   printf("%d\n",c);
}
   return 1;
}
/*OUTPUT
enter the number 7
Fibonacci series
1
1
2
3
5
8
13
*/
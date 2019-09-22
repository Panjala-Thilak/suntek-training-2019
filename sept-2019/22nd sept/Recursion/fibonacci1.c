//recursion 
#include<stdio.h>
int fib(int);
int main()
{
   int n,i,j;
   printf("enter the number ");
   scanf("%d",&n); 
   printf("Fibonacci series\n");
 	for(i=1;i<=n;i++)
   {
      printf("%d\n",fib(j));
      j++; 
   }
   return 1;
}
 
int fib(int n)
{
   if(n==0)
      return 0;
   else if (n==1)
      return 1;
   else
      return(fib(n-1) + fib(n-2));
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
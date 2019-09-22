#include<stdio.h>
int main()
{
    int n,a[100],i,sum=0,A,B;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    long n1=(n*(n+1))/2;
    for(i=0;i<n;i++)
    sum+=a[i];
    B=n-(n1-sum);
    A=B-(n1-sum);
    printf("A is %d and B is %d",A,B);
    return 1;
}
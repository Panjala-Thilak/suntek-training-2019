#include<stdio.h>
int main()
{
    int n,a[100],i,sum=0,res;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    long n1=(n*(n+1))/2;
    for(i=0;i<n;i++)
    sum+=a[i];
    res=n-(n1-sum);
    printf("the first repitative element is %d",res);
    return 1;
}
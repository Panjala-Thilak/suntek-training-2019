#include<stdio.h>
int main()
{
    int n,i,a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int first=0,last=0,start=0,end=0,c=0;
    for(i=0;i<n;i++)
    {
        last=last+a[i];
        if(last<0)
        {
            last=0;
            c=i+1;
        }
        if(first<last)
        {
            first=last;
            start=c;
            end=i;
        }
        
    }
    printf("the sum is %d ",first);
    printf("the sub array is ");
    for(i=start;i<=end;i++)
    printf("%d ", a[i]);
    return 1;
}
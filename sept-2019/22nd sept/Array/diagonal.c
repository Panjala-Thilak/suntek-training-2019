#include<stdio.h>
int main()
{
	int n,i,j,k=0,l=0;
	printf("enter the dimension of the matrix");
	scanf("%d",&n);
	int a[10][10];
	printf("enter the elements into the matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int d[n],d1[n];
	for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
	{
		if(i==j)
		{
		d[k]=a[i][j];	
		k++;
		}
		if(i+j==n-1)
		{
			d1[l]=a[i][j];
			l++;
		}
		}	
	}
	printf("Diagonals of the matrix are :\n");
	for(i=0;i<n;i++)
	printf("%d ",d[i]);
	printf("\n");
	for(i=0;i<n;i++)
	printf("%d ",d1[i]);
	return 1;
	
}
/*
OUTPUT
enter the dimension of the matrix4
enter the elements into the matrix
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
Diagonals of the matrix are :
1 6 11 16
4 7 10 13
*/
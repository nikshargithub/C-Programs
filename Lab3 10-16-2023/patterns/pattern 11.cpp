#include <stdio.h>
#include <math.h>
int main()
{
	int i,j,n,s;
	printf("No. of rows of the pattern:\n");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		for (j=0;j<i;j++)
		{
			printf(" ");
		}
		for (s=0;s<n-i;s++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i=0;i<n;i++)
	{
		for (s=0;s<n-i-1;s++)
		{
			printf(" ");
		}
		for (j=0;j<i+1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

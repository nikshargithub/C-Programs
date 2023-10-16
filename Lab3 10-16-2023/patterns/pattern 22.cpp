#include <stdio.h>
#include <math.h>
int main()
{
	int i,j,n;
	printf("No. of rows of the pattern:\n");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		for (j=0;j<2*i+1;j++)
		{
			if ((j%2)==0)
			printf("%d",i+1);
			else
			printf("*");
		}
		printf("\n");
	}
	for (i=0;i<n;i++)
	{
		for (j=0;j<2*(n-i)-1;j++)
		{
			if ((j%2)==0)
			printf("%d",n-i);
			else
			printf("*");
		}
		printf("\n");
	}
}

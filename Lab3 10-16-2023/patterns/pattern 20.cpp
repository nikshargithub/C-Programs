#include <stdio.h>
#include <math.h>
int main()
{
	int i,j,n,k=0;
	printf("No. of rows of the pattern:\n");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		for (j=0;j<n-i;j++)
		{
			printf("%d",j+k+1);
		}
		k+=n;
		printf("\n");
	}
}

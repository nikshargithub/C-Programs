#include <stdio.h>
int main()
{
	int i,j,n,s=0;
	printf("Enter the order of the matrix:");
	scanf("%d",&n);
	int a[n][n];
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("Enter the %d row and %d column of matrix:",i,j);
			scanf("%d",&a[i][j]);
			printf("\n");
		}
	}
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			if ((i==j) || ((i+j)==n-1))
			{
				s+=a[i][j];
			}
		}
	}
	printf("The sum of both the diagnols is %d",s);
	return 0;
}

#include <stdio.h>
#include <math.h>
int main()
{
	int i,j,n,m;
	printf("Enter no. of rows and no. of columns:\n");
	scanf("%d %d",&n,&m);
	int a[n][m];
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			printf("Enter element of %d th row and %d th column:\n",i,j);
			scanf("%d",&a[i][j]);
	    }
    }
    printf("Transpose of Matrix");
    printf("\n");
    for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			printf("%d ",a[j][i]);
	    }
	    printf("\n");
    }
}

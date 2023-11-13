#include <stdio.h>
int main()
{
	int i,n,k,c,j;
	printf("Enter number of elements in the array:\n");
	scanf("%d",&n);
	int a[n],b[n];
	for (i=0;i<n;i++)
	{
		printf("Enter array Element:\n");
		scanf("%d",&a[i]);
		b[i] = a[i];
	}
	for (j=0;j<n;j++)
	{
		c=0;
		for (i=0;i<n;i++)
		{
			if (a[i]==b[j])
			{
				c+=1;
			}
		}
		if (c==1)
		{
			printf("%d",b[j]);
			break;
		}
	}
}

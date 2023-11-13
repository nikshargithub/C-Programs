#include <stdio.h>
int main()
{
	int i,n,s,k,d,j;
	printf("Enter number of elements in the array:\n");
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++)
	{
		printf("Enter array Element:\n");
		scanf("%d",&a[i]);
	}
	for (j=0; j<n-1; j++)
	{
		for (i=0;i<n-1-j;i++)
		{
			if (a[i]>a[i+1])
			{
				k=a[i];
				a[i]=a[i+1];
				a[i+1]=k;
			}
		}
	}
	for (i=0;i<n;i++)
	{
		if (a[i+1] == a[i]+1)
		{
			d=1;
		}
		else{
			printf("%d",a[i]+1);
			break;
		}
	}
}

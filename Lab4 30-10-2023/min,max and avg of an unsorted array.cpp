#include <stdio.h>
int main()
{
	int i,n,s=0,k,d,j;
	printf("Enter number of elements in the array:\n");
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++)
	{
		printf("Enter array Element:\n");
		scanf("%d",&a[i]);
	}
	k = a[0];
	d = a[0];
	for (j=0;j<n;j++)
	{
		s+=a[j];
		if (a[j]>k)
		{
			k = a[j];
		}
	}
	for (j=0;j<n;j++)
	{
		s+=a[j];
		if (a[j]<d)
		{
			d = a[j];
		}
	}
	
	printf("%d is the maximum number\n",k);
	printf("average of the integers in array is:%d\n",s/n);
	printf("%d is the minimum number\n",d);
}


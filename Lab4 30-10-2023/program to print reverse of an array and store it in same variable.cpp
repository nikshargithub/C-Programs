#include <stdio.h>
int main()
{
	int i,n,k;
	printf("Enter number of elements in the array:\n");
	scanf("%d",&n);
	int a[n],b[n];
	for (i=0;i<n;i++)
	{
		printf("Enter array Element:\n");
		scanf("%d",&a[i]);
		b[i] = a[i];
	}
	for (i=0;i<n;i++)
	{
		k=b[n-1-i];
		a[i]=k;
	}
	for (i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}

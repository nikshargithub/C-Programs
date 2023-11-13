#include <stdio.h>
int main()
{
	int i,n,k;
	printf("Enter number of elements in the array:\n");
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++)
	{
		printf("Enter array Element:\n");
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i+=2)
	{
		k=a[i];
		a[i]=a[i+1];
		a[i+1]=k;
	}
	for (i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}

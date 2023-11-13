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
	printf("Printing elements of the copied array:");
	for (i=0;i<n;i++)
	{
		printf("%d",b[i]);
	}
}

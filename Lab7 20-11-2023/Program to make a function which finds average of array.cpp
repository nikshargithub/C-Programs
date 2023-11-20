#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int average(int n, int *arr)
{
	int i,s=0,k;
	for (i=0;i<n;i++)
	{
		s+=*(arr+i);
	}
	k = s/n;
	return k;
};

int main()
{
	int n,i;
	printf("Enter the length of the array:");
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++)
	{
		printf("Enter element %d ",i);
		scanf("%d",&a[i]);
	}
	printf("%d",average(n,a));
}

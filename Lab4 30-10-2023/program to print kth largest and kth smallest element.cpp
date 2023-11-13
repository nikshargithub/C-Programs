#include <stdio.h>
int main()
{
	int i,n,s=0,k,d,j;
	printf("Enter number of elements in the array and k:\n");
	scanf("%d %d",&n,&k);
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
				d=a[i];
				a[i]=a[i+1];
				a[i+1]=d;
			}
		}
	}
	printf("%d th smallest element is %d \n",k,a[k-1]);
	printf("%d th largest element is %d",k,a[n-k]);
}

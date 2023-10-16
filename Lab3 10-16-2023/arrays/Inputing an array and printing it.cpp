#include <stdio.h>
#include <math.h>
int main()
{
	int i,j,n;
	printf("Enter no. of elements in the array:\n");
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++)
	{
		printf("enter array element number %d:\n",i);
		scanf("%d",&a[i]);
    }
    for (j=0;j<n;j++)
    {
    	printf("%d", a[j]);
	}
}

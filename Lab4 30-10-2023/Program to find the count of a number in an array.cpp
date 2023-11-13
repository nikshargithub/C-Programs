#include <stdio.h>
int main()
{
	int i,n,k,c=0;
	printf("Enter number of elements in the array and the number to be counted:\n");
	scanf("%d %d",&n,&k);
	int a[n];
	for (i=0;i<n;i++)
	{
		printf("Enter array Element:\n");
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++)
	{
		if (a[i]==k)
		{
			c+=1;
		}
	}
	printf("the number %d is present %d times",k,c);
}

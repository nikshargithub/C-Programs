#include <stdio.h>
#include <math.h>
int main()
{
	int i,j,n,s=0;
	printf("Enter no. of elements in the array:\n");
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++)
	scanf("%d",a[i]);
	for (j=0;j<n;j++)
	s+=a[i];
	printf("Average of number is:");
	printf("%f",s/n);
}

#include <stdio.h>
#include <math.h>
int main()
{
	int i,j,n,s,l;
	printf("No. of rows of the pattern and starting number:\n");
	scanf("%d %d",&n,&s);
	l = s+n-1;
	for (i=0;i<n;i++)
	{
		for (j=0;j<i+1;j++)
		{
			printf("%d",s);
		}
		s++;
		printf("\n");
	}
	for (i=0;i<n;i++)
	{
		for (j=0;j<n-i;j++)
		{
			printf("%d",l);
		}
		l--;
		printf("\n");
	}
}

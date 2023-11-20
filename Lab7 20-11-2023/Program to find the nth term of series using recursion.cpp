#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int s(int n,int a,int b,int c)
{
	int sum=0,k=1;
	if ((n>3))
	{
		sum=(s(n-1,a,b,c)+s(n-2,a,b,c)+s(n-3,a,b,c));
	}
	else if (n==1)
	{
		return a;
	}
	else if (n==2)
	{
		return b;
	}
	else if (n==3){
		return c;
	}
	else if (n==0){
		return sum;
	}
};

int main()
{
	int n;
	printf("Enter the term you want to find:");
	scanf("%d",&n);
	printf("%d",s(n,1,2,3));
}

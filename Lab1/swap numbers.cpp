#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("The numbers printed swapped:%d %d",a,b);
	return 0;
}

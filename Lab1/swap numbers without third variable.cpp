#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers to be swapped:");
	scanf("%d",&a,&b);
	a=a+b-a;
	b=a+b-b;
	printf("swapped numbers:%d %d",a,b);
}

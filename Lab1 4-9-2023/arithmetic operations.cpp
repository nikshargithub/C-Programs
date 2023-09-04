#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	printf("sum:%d\n",c);
	printf("diff:%d\n",d);
	printf("mul:%d\n",e);
	printf("div:%d\n",f);
	return 0;
}

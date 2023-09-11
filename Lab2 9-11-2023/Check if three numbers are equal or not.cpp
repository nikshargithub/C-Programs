#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three numbers:\n");
	scanf("%d %d %d",&a,&b,&c);
	if ((a==b)&&(b==c)&&(c==a))
	{
		printf("Equal");
	}
	else{
		printf("Not Equal");
	}
}

#include<stdio.h>
int main()
{
	int a,b,c,d,e,perc;
	printf("Enter students marks in all subjects:");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	perc = (a+b+c+d+e)/5;
	printf("percentage marks of student:%d%%",perc);
	return 0;
}

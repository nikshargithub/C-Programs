#include<stdio.h>
int main()
{
	int km;
	printf("Enter km:");
	scanf("%d",&km);
	printf("Meter:%d\n",km*1000);
	printf("Centimeter:%d\n",km*1000*100);
	printf("Milimeter:%d\n",km*1000*100*10);
	return 0;
}

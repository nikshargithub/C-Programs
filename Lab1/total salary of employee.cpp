#include<stdio.h>
int main()
{
	float sal,totsal;
	printf("Enter salary:\n");
	scanf("%f",&sal);
	totsal = sal+sal*0.45+sal*0.60;
	printf("Total salary:%f",totsal);
	return 0;
}

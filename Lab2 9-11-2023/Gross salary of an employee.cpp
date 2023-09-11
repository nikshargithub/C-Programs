#include <stdio.h>
int main()
{
	float sal,HRA,DA,grsal;
	int tier;
	printf("Enter salary and DA and tier Value:\n");
	scanf("%f %f %d",&sal,&DA,&tier);
	if (tier==1)
	{
		HRA = 0.24*sal;
		grsal = HRA+sal+DA;
		printf("Gross salary is %f",grsal);
	}
	else if(tier==2)
	{
		HRA = 0.16*sal;
		grsal = HRA+sal+DA;
		printf("Gross salary is %f",grsal);
	}
	else{
		HRA = 0.12*sal;
		grsal = HRA+sal+DA;
		printf("Gross salary is %f",grsal);
	}
}

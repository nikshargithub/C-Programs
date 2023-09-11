#include <stdio.h>
int main()
{
	int d,m,y;
	printf("Enter day,month,year:\n");
	scanf("%d %d %d",&d,&m,&y);
	if (m==1||m==3||m==5||m==7||m==8||m==10||m==12)
	{
		if (d!=31)
		{
			printf("%d %d %d",d+1,m,y);
		}
		else if (d==31){
			if (m!=12)
			{
				printf("%d %d %d",1,m+1,y);
			}
			else{
				printf("%d %d %d",1,1,y+1);
			}
		}
		else{
			printf("Invalid Output");
		}
	}
	else if (m==4||m==6||m==9||m==11)
	{
		if (d!=30)
		{
			printf("%d %d %d",d+1,m,y);
		}
		else if (d==30){
			printf("%d %d %d",1,m+1,y);
		}
		else{
			printf("Invalid Output");
		}
	}
	else{
	if (y%4==0 && (y%100!=0 || y%400==0))
	{
		if (d!=29)
		{
			printf("%d %d %d",d+1,m,y);
		}
		else{
			printf("%d %d %d",1,m+1,y);
		}
	}
	else{
		if (d==29)
		{
			printf("Invalid output");
		}
		else if (d!=28)
		{
			printf("%d %d %d",d+1,m,y);
		}
		else{
			printf("%d %d %d",1,m+1,y);
		}
	}
	}
}

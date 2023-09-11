#include <stdio.h>
int main()
{
	int p,c,m,b,cs;
	float s;
	printf("Enter marks in subjects:\n");
	scanf("%d %d %d %d %d",&p,&c,&m,&b,&cs);
	s = (p+c+m+b+cs)/5;
	printf("Percentage marks:%f%%\n",s);
	if (s>=90)
	{
		printf("Grade A");
	}
	else if (s>=80)
	{
		printf("Grade B");
	}
	else if (s>=70)
	{
		printf("Grade C");
	}
	else if(s>=60)
	{
		printf("Grade D");
	}
	else if (s>=40)
	{
		printf("Grade E");
	}
	else{
		printf("Grade F");
	}
}

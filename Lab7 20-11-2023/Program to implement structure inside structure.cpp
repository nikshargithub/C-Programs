#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student
{
	int sage;
	int sno;
	struct name
	{
		char lname[20];
		char fname[20];
	}n;
}stu;

int main()
{
	printf("Enter students age:\n");
	scanf("%d",&stu.sage);
	printf("Enter students number:\n");
	scanf("%d",&stu.sno);
	printf("Enter students first name:\n");
	scanf("%s",stu.n.fname);
	printf("Enter students last name:\n");
	scanf("%s",stu.n.lname);
	printf("students age:\n");
	printf("%d\n",stu.sage);
	printf("students number:\n");
	printf("%d\n",stu.sno);
	printf("students first name:\n");
	printf("%s\n",&stu.n.fname);
	printf("students last name:\n");
	printf("%s\n",stu.n.lname);
}

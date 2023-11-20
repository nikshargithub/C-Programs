#include <stdio.h>
#include <string.h>
#include <stdlib.h>

union student 
{
	char name[100];
	int marks[5];
	int roll_no;
};

int main()
{
	union student stu;
	int i,s=0;
	printf("Enter name of the student:");
	scanf("%s",stu.name);
	printf("Enter roll no. of the student:");
	scanf("%d",&stu.roll_no);
	for (i=0;i<5;i++)
	{
		printf("Enter marks of subject %d ",i+1);
		scanf("%d",&stu.marks[i]);
	}
	for (i=0;i<5;i++)
	{
		s+=stu.marks[i];
	}
	printf("Percentage marks of student is %d",s/5);
}

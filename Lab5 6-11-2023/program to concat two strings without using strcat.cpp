#include <stdio.h>
int main()
{
	int i,l1,l2;
	char s[100],s2[100],s3[100];
	printf("Enter string 1:");
	scanf("%[^\n]s",s);
	l1 = ((sizeof(s)/sizeof(char))-1);
	printf("Enter string 2:");
	scanf("%[^\n]s",s2);
	l2 = ((sizeof(s2)/sizeof(char))-1);
	for (i=0;i<l1;i++)
	{
		s3[i] = s[i];
	}
	for (i=l1;i<l1+l2;i++)
	{
		s3[i] = s2[i];
	}
	for (i=0;i<l1+l2;i++)
	{
		printf("%c",s3[i]);
	}
	return 0;
}

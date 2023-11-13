#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int i,j;
	char k,s[100],s2[100];
	printf("Enter string:");
	scanf("%s",s);
	strcpy(s2,strupr(s));
	j = strlen(s);
	for (i=0;i<j;i++)
	{
		if (s[i] == s2[i])
		{
			printf("First capital letter is:%c",s[i]);
			break;
		}
	}
}

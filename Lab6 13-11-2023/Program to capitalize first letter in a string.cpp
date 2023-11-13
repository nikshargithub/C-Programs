#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int i,j;
	char k,s[100];
	printf("Enter string:");
	scanf("%s",s);
	j = strlen(s);
	for (i=0;i<1;i++)
	{
		s[i] = s[i]-32;
	}
	for (i=0;i<j;i++)
	{
		printf("%c",s[i]);
	}
}

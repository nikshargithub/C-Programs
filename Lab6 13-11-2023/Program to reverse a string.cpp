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
	for (i=0;i<(j+1)/2;i++)
	{
		k = s[i];
		s[i] = s[j-i-1];
		s[j-i-1] = k;
	}
	for (i=0;i<j;i++)
	{
		printf("%c",s[i]);
	}
}

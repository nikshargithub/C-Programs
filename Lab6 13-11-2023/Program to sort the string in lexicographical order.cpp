#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int i,j,l;
	char k,s[100];
	printf("Enter string:");
	scanf("%s",s);
	l = strlen(s);
	for (i=0;i<l-1;i++)
	{
		for (j=0;j<i+1;j++)
		{
			if (s[j]>s[j+1])
			{
				k = s[i];
				s[i] = s[i+1];
				s[i+1] = k;
			}
		}
	}
	for (i=0;i<l;i++)
	{
		printf("%c",s[i]);
	}
}

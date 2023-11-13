#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int i,j;
	char k,s[100];
	printf("Enter string and char:");
	scanf("%s %c",s,&k);
	for (i=0;i<strlen(s);i++)
	{
		if (k == s[i])
		{
			printf("First occurence in postion:%d",i);
			break;
		}
	}
}

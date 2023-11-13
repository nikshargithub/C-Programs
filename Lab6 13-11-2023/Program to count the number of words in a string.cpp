#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int i,j,c=0;
	char k,s[100];
	printf("Enter string:");
	scanf("%[^\n]s",s);
	j = strlen(s);
	for (i=0;i<j;i++)
	{
		if (s[i] == ' ')
		{
			c+=1;
		}
	}
	printf("No. of words is:%d",c+1);
}

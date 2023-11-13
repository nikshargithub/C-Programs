#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int i,j,l,c;
	char k,s[100];
	printf("Enter string:");
	scanf("%s",s);
	l = strlen(s);
	for (i=0;i<l;i++)
	{
		c=0;
		for (j=0;j<l;j++)
		{
			if (s[i]==s[j])
			{
				c+=1;
			}
		}
		if (c==1)
		{
			printf("First non-repeated character:%c",s[i]);
			break;
		}
	}
}

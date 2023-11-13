#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int i,j,c=0,d=0,l,t,p;
	char k[100],s[100];
	char s3[] = "the";
	printf("Enter string:");
	scanf("%[^\n]s",s);
	j = strlen(s);
	for (i=0;i<j;i++)
	{
		if (s[i] != ' ')
		{
			k[c] = s[i];
			c++;
		}
		else if(s[i] == ' ')
		{
			c=0;
			if (strcmp(strlwr(k),s3))
			{
				l=1;
			}
			else if(s[i]==' ')
			{
				d+=1;
			}
		}
	}
	printf("Frequency of the is:%d",d);
}

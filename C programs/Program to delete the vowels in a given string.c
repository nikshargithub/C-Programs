#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int i,j,l,c,k;
	char s[100],s2[100];
	printf("Enter string:");
	scanf("%s",s);
	strcpy(s2,s);
	l = strlen(s2);
	for (i=0;i<l;i++)
	{
		c=0;
		for (j=0;j<l;j++)
		{
			if (s2[i]==s2[j])
			{
				c+=1;
			}
		}
		if (c>1)
        {
            for (k=i;k<strlen(s);k++)
            {
                s[k] = s[k+1];
            }
        }
	}
	for (i=0;i<l;i++)
    {
        printf("%c",s[i]);
    }
}

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
		if (c == s[i]-96)
		{
            k=1;
		}
		else{
            k=0;
            break;
		}
	}
	if (k)
	{
        printf("YES");
	}
	else{
        printf("NO");
	}
}

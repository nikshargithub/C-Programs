#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char s[6] = "apple";
	int i;
	char k;
	for (i=0;i<5;i++)
	{
		if ((s[i]!='a')&&(s[i]!='e')&&(s[i]!='o')&&(s[i]!='i')&&(s[i]!='u'))
		{
			printf("%c",++s[i]);
		}
		else{
			printf("%c",s[i]);
		}
	}
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int i,j;
	char k,s[100];
	printf("Enter string:");
	scanf("%s",s);
	for (i=0;i<strlen(s);i++)
	{
		if ((s[i]=='a')||(s[i]=='e')||(s[i]=='o')||(s[i]=='i')||(s[i]=='u'))
		{
			printf("%c\n",s[i]);
		}
	}
}

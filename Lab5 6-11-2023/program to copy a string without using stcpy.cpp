#include <stdio.h>
int main()
{
	int i;
	static char s[100],s2[100];
	printf("Enter string:");
	scanf("%[^\n]s",s);
	for (i=0;i<((sizeof(s)/sizeof(char))-1);i++)
	{
		s2[i] = s[i];
	}
	printf("Copied string:");
	for (i=0;i<((sizeof(s)/sizeof(char))-1);i++)
	{
		printf("%c",s2[i]);
	}
}

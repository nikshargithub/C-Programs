#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int i,j,t;
	char k,s[100],s2[100];
	printf("Enter string:");
	scanf("%s",s);
	strcpy(s2,s);
	j = strlen(s);
	for (i=0;i<(j+1)/2;i++)
	{
		k = s[i];
		s[i] = s[j-i-1];
		s[j-i-1] = k;
	}
	for (i=0;i<j;i++)
	{
		if (s[i] == s2[i])
		{
			t=1;
		}
		else{
			t=0;
			break;
		}
	}
	if (t)
	{
		printf("Palindrome string ");
	}
	else{
		printf("Not a palindrome string");
	}
}

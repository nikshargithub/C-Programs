#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
	FILE *fp;
	char s[100],c;
	int i;
	printf("Enter something:");
	scanf("%s",s);
	fp = fopen("Z:/Text files/input.txt","w");
	for (i=0;i<strlen(s);i++)
	{
		putc(s[i],fp);
	}
	fp = fopen("Z:/Text files/input.txt","r");
	while (getc(fp)!=EOF)
	{
		c = getc(fp);
		printf("%c",fp);
	}
}

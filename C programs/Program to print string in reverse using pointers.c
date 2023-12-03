#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[100];
    printf("Enter string:");
    scanf("%s",s);
    printf("%s\n",s);
    char *p;
    p = s;
    int n=strlen(s),i;
    for (i=0;i<n;i++)
    {
        printf("%c",*(p+n-i-1));
    }
}

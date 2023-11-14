#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int i,j,c=0,k;
    char s[100];
    printf("Enter string:");
    scanf("%[^\n]s",s);
    for (i='a';i<='z';i++)
    {
        for (j=0;j<strlen(s);j++)
        {
            if (i == strlwr(s[j]))
            {
                k = 1;
                break;
            }
            else{
                k=0;
            }
        }
        if (k)
        {
            c+=1;
        }
    }
    if (c == 26)
    {
        printf("is a panagram");
    }
    else{
        printf("not a panagram");
    }
}

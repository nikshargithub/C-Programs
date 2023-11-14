#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int i,j,k,c=0;
    char s[100],s2[100];
    printf("Enter string1 and string2:");
    scanf("%s %s",s,s2);
    for (i=0;i<strlen(s);i++)
    {
        for (j=0;j<strlen(s2);j++)
        {
            if (s[i] == s2[j])
            {
                k=1;
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
    if (c == strlen(s))
    {
        printf("Anagram");
    }
    else{
        printf("Not an anagram");
    }
}

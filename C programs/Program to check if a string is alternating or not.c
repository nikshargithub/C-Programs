#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int i,j,k,l;
    char s[100];
    printf("Enter string:");
    scanf("%[^\n]s",s);
    l = strlen(s);
    for (i=0;i<(l+1)/2;i++)
    {
        if ((s[i] == s[i+2]))
        {
            if (s[i] = s[i+1])
            {
                k=0;
                break;
            }
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

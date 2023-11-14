#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int i,j,c=0,k=0;
    char s[100];
    printf("Enter string:");
    scanf("%[^\n]s",s);
    for (i=0;i<strlen(s);i++)
    {
        if (s[i] == ' ')
        {
            c+=1;
        }
    }
    for (i=0;i<strlen(s);i++)
    {
        if (s[i] == ' ')
        {
            k+=1;
        }
        if (k==c)
        {
            printf("The lenght of last word is %d",strlen(s)-i-1);
            break;
        }
    }
}

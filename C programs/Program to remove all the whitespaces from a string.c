/* program to remove the specific elements from an array in C. */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main ()
{
    int i,j;
    char s[100],s2[100];
    printf("Enter string:");
    scanf("%[^\n]s",s);
    strcpy(s2,s);
    for (i=0;i<strlen(s2);i++)
    {
        if (s2[i] == ' ')
        {
            for (j=i;j<strlen(s2);j++)
            {
                s[j] = s[j+1];
            }
        }
    }
    for (i=0;i<strlen(s);i++)
    {
        printf("%c",s[i]);
    }
}

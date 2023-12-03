#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int k=0,i,z=9999,m;
    char s[100],arr[100];
    printf("Enter string:");
    scanf("%[^\n]s",s);
    for (i=0;i<strlen(s);i++)
    {
        if (s[i] != ' ')
        {
            arr[k++] = s[i];
        }
        else if(s[i] == ' ')
        {
            k=0;
            if (z>strlen(arr))
            {
                z = strlen(arr);
            }
            else{
                    m = i;
            }
        }
    }
    printf("%d",i);
}

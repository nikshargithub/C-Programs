#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    FILE *fp;
    fp = fopen("C:/Users/Nikhil/OneDrive/Desktop/C programs unofficial/text3.txt","r");
    while (fscanf(fp,"%c",ch)==1)
    {
        printf("%d",ch);
    }
}

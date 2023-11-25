#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("input.txt","w");
    char s[100],c[100];
    scanf("%s",s);
    fprintf(fp,"%s",s);
    fclose(fp);
    fp = fopen("input.txt","r");
    fscanf(fp,"%s",c);
    printf("%s",c);
    fclose(fp);
}

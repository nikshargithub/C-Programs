#include <stdio.h>

int main()
{
    FILE *fp,*fp2;
    char s[100];
    fp = fopen("C:/Users/Nikhil/OneDrive/Desktop/C programs unofficial/test.txt","r");
    fp2 = fopen("copy.txt","w");
    fscanf(fp,"%s",s);
    fprintf(fp2,"%s",s);
    fclose(fp);
    fclose(fp2);
}

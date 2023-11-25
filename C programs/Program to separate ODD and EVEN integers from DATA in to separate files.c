#include <stdio.h>

int main()
{
    FILE *fp,*fp2,*fp3;
    int c;
    fp = fopen("C:/Users/Nikhil/OneDrive/Desktop/C programs unofficial/DATA.txt","r");
    while (fscanf(fp,"%d",&c)==1)
    {
        printf("%d",c);
        if ((c%2)==0)
        {
            fp2 = fopen("EVEN.txt","w");
            fprintf(fp2,"%d",c);
            fclose(fp2);
        }
        else{
            fp3 = fopen("ODD.txt","w");
            fprintf(fp3,"%d",c);
            fclose(fp3);
        }
    }
    fclose(fp);
}

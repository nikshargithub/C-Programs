#include <stdio.h>
int main() {
    int i,j,n;
    printf("Enter no of rows:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        for (j=0;j<n+2;j++)
        {
            if (i%2==0)
            {
                if (j==6)
                {
                    printf("%d",i+2);
                }
                else{
                    printf("%d",i+1);
                }
            }
            else{
                if (j==0)
                {
                    printf("%d",i+2);
                }
                else{
                    printf("%d",i+1);
                }
            }
        }
        printf("\n");
    }
    return 0;
}

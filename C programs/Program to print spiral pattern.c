#include <stdio.h>

int main()
{
    int i,j,k=1,p,q,r,s,t,n;
    printf("Enter no of rows:");
    scanf("%d",&n);
    int a[n][n];
    for (i=0;i<(n+1)/2;i++)
    {
        for (j=i;j<n-i;j++)
        {
            a[i][j] = k++;
        }
        for (p=i+1;p<n-i;p++)
        {
            a[p][n-1-i] = k++;
        }
        for (q=n-i-2;q>=i;q--)
        {
            a[n-1-i][q] = k++;
        }
        for (r=n-2-i;r>=i+1;r--)
        {
            a[r][i] = k++;
        }
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

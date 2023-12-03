#include <stdio.h>

int main() {
    int n,i,j,k,x,t;
    printf("Enter no of rows and x:");
    scanf("%d %d",&n,&x);
    int a[n],b[n],c[n],d[n];
    for (i=0;i<n;i++)
    {
        printf("Enter array element:");
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        b[i] = (a[i]+x)/2;
    }
    printf("\n");
    for (i=0;i<n;i++)
    {
        t=0;
        for (j=0;j<n;j++)
        {
            if (b[i]==a[j])
            {
                t+=1;
            }
        }
        d[i] = t;
    }
    for (i=0;i<n;i++)
    {
        printf("%d ",d[i]);
    }
}

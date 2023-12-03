#include <stdio.h>

int main() {
    int i,n,j,k,c,s;
    printf("Enter no of rows and sum needed:");
    scanf("%d %d",&n,&s);
    int a[n],b[n];
    for (i=0;i<n;i++)
    {
        printf("Enter array elements:");
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            k = (a[i]+a[j]);
            if (k==s)
            {
                printf("%d,%d\n",a[i],a[j]);
            }
        }
    }
    return 0;
}

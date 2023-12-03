#include <stdio.h>
int main() {
    int n,i,j,s,z;
    printf("Enter no of rows of array:");
    scanf("%d",&n);
    int a[n];
    for (printf("Enter array elements:"),i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (j=0;j<n;j++)
    {
        s=0;
        for (i=0;i<=j;i++)
        {
            s+=a[i];
        }
        printf("%d ",s/(j+1));
    }
    return 0;
}

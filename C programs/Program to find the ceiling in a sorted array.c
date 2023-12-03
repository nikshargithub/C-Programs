#include <stdio.h>

int main() {
    int i,n,j,x,k,d,min=100000000;
    printf("n&x:");
    scanf("%d %d",&n,&x);
    int a[n],b[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        k = a[i]-x;
        if (k>0)
        {
            if (min>k)
            {
                min = k;
                d = a[i];
            }
        }
    }
    printf("%d",d);
    return 0;
}

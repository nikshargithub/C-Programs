#include <stdio.h>

int main() {
    int i,n,j,k,c,s;
    printf("no. of rows and sum needed:");
    scanf("%d %d",&n,&s);
    int a[n],b[n];
    for (i=0;i<n;i++)
    {
        printf("Enter array element:");
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            for (k=j+1;k<n;k++)
            {
                c = a[i]+a[j]+a[k];
                if (c==s)
                {
                    printf("%d,%d,%d\n",a[i],a[j],a[k]);
                }
            }
        }
    }
    return 0;
}

#include <stdio.h>

int main() {
    int i,n,j,x,k=0,s=0,z;
    printf("n:");
    scanf("%d",&n);
    z = n/2;
    int a[n],b[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<z;i++)
    {
        s+=a[i];
    }
    for (i=z;i<n;i++)
    {
        k+=a[i];
    }
    if ((s-k)>0)
    {
        printf("TO make is balance add %d to 2nd half",s-k);
    }
    else{
        printf("TO make is balance add %d 1st half",k-s);
    }
    return 0;
}

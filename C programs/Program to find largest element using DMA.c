#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    int *p;
    printf("ENter n:\n");
    scanf("%d",&n);
    p = (int*)malloc(n*sizeof(int));
    for (i=0;i<n;i++)
    {
        printf("Enter element of array:");
        scanf("%d",&p[i]);
    }
    int k=p[i];
    for (i=0;i<n-1;i++)
    {
        if (p[i+1]>k)
        {
            k = p[i+1];
        }
    }
    printf("%d",k);
}

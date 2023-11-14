#include <stdio.h>
int main()
{
    int i,j,n,k=0,s=0;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        k++;
        s+=k;
        for (j=0;j<i+1;j++)
        {
            //printf("s:%d\n",s);
            //printf("i:%d\n",i);
            //printf("j:%d\n",j);
            printf("%d ",s-j);
        }
        printf("\n");
    }
}

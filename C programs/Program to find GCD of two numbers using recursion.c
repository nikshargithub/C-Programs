#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int gcd(int n1,int n2)
{
    if (n1>n2)
    {
        int b = n1%n2;
        if (b == 0)
        {
            return n2;
        }
        else{
            gcd(n2,b);
        }
    }
    else{
        int b = n2%n1;
        if (b == 0)
        {
            return n1;
        }
        else{
            gcd(n1,b);
        }
    }
}

int main()
{
    int n1,n2;
    printf("Enter two numbers:");
    scanf("%d %d",&n1,&n2);
    printf("gcd of %d and %d is %d",n1,n2,gcd(n1,n2));
}

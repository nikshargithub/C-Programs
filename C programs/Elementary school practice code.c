#include <stdio.h>
#include <stdlib.h>

void good_messages(int y)
{
    switch (y)
    {
        case 0:
        printf("correct\n");
        break;
        case 1:
        printf("good\n");
        break;
        case 2:
        printf("Very good\n");
        break;
    }
};


void bad_messages(int z)
{
    switch (z)
    {
        case 0:
        printf("wrong\n");
        break;
        case 1:
        printf("try again\n");
        break;
        case 2:
        printf("need to improve\n");
        break;
    }
};

int main()
{
    int n,i=0,wrong_count=0;
    int a,b,c;
    int x = rand()%4; // for +,-,/,*
    int y = rand()%3; // for good messages 'correct','good','very good'
    int z = rand()%3;  // for wrong messages 'wrong','try again','need to improve'
    printf("How many questions do you want\n");
    scanf("%d",&n);
    while (i!=n)
    {
        switch (x)
        {
            case 0:
            a = rand()%10;
            b = rand()%10;
            printf("What is the value of\n");
            printf("%d + %d = ",a,b);
            scanf("%d",&c);
            if (c!=a+b)
            {
                wrong_count+=1;
            }
            while (c!=a+b)
            {
                bad_messages(z);
                printf("What is the value of\n");
                printf("%d + %d = ",a,b);
                scanf("%d",&c);
            }
            good_messages(y);
            break;

            case 1:
            a = rand()%10;
            b = rand()%10;
            printf("What is the value of\n");
            printf("%d - %d = ",a,b);
            scanf("%d",&c);
            if (c!=a-b)
            {
                wrong_count+=1;
            }
            while (c!=(a-b))
            {
                bad_messages(z);
                printf("What is the value of\n");
                printf("%d - %d = ",a,b);
                scanf("%d",&c);
            }
            good_messages(y);
            break;

            case 2:
            if (c!=a/b)
            {
                wrong_count+=1;
            }
            a = rand()%10;
            b = rand()%10;
            printf("What is the value of\n");
            printf("%d / %d = ",a,b);
            scanf("%d",&c);
            while (c!=a/b)
            {
                bad_messages(z);
                printf("What is the value of\n");
                printf("%d / %d = ",a,b);
                scanf("%d",&c);
            }
            good_messages(y);
            break;

            case 3:
            a = rand()%10;
            b = rand()%10;
            printf("What is the value of\n");
            printf("%d * %d = ",a,b);
            scanf("%d",&c);
            if (c!=a*b)
            {
                wrong_count+=1;
            }
            while (c!=a*b)
            {
                bad_messages(z);
                printf("What is the value of\n");
                printf("%d * %d = ",a,b);
                scanf("%d",&c);
            }
            good_messages(y);
            break;
        }
        i++;
    }
    float efficiency = ((float)n-(float)wrong_count)/(float)n;
    printf("Efficiency of the child is:%f\n",efficiency*100);
    if (efficiency<0.75)
    {
        printf("Please ask your instructor for extra help\n");
    }
    else{
        printf("you are doing good\n");
    }
}

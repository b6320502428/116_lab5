#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    if(n%2==0)
    {
        for(i=0; i<n/2; i++)
        {
            for(j=0; j<n/2-i-1; j++)
            {
                printf("_");
            }
            printf("*");
            if(i==0)
            {
                for(j=0; j<n/2-i-1; j++)
                {
                    printf("_");
                }
            }
            else
            {
                for(j=0; j<2*i-1; j++)
                {
                    printf("_");
                }
                printf("*");
                for(j=0; j<n/2-i-1; j++)
                {
                    printf("_");
                }
            }
            printf("\n");
        }
        for(i=n/2-1; i>=0; i--)
        {
            for(j=0; j<n/2-i-1; j++)
            {
                printf("_");
            }
            printf("*");
            if(i==0)
            {
                for(j=0; j<n/2-i-1; j++)
                {
                    printf("_");
                }
            }
            else
            {
                for(j=0; j<2*i-1; j++)
                {
                    printf("_");
                }
                printf("*");
                for(j=0; j<n/2-i-1; j++)
                {
                    printf("_");
                }
            }
            printf("\n");
        }
    }
    else
    {
        for(i=0; i<n/2+1; i++)
        {
            for(j=0; j<n/2-i; j++)
            {
                printf("_");
            }
            printf("*");
            if(i==0)
            {
                for(j=0; j<n/2-i; j++)
                {
                    printf("_");
                }
            }
            else
            {
                for(j=0; j<2*i-1; j++)
                {
                    printf("_");
                }
                printf("*");
                for(j=0; j<n/2-i; j++)
                {
                    printf("_");
                }
            }
            printf("\n");
        }
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    if(n%2==0)
    {
        for(i=0; i<=n/2; i++)
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
        }
        for(i=0; i<n/2; i++)
        {

        }
    }
    return 0;
}

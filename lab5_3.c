#include <stdio.h>
int main()
{
    int i,n,j=0,tmp;
    scanf("%d",&n);
    for(i=2;1;i++)
    {
        tmp=i;
        while(tmp!=1)
        {
            if(tmp%2==0)
            {
                tmp/=2;
            }
            else if(tmp%3==0)
            {
                tmp/=3;
            }
            else if(tmp%5==0)
            {
                tmp/=5;
            }
            else
            {
                j--;
                break;
            }
        }
        j++;
        if(j==n)
        {
            break;
        }
    }
    printf("%d",i);
    return 0;
}

#include <stdio.h>
int main()
{
    int i,j,k,l,n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    int a[n][n],b[m][m];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(k=0; k<n-(m-1); k++)
    {
        for(l=0; l<n-(m-1); l++)
        {
            for(i=0; i<m; i++)
            {
                for(j=0; j<m; j++)
                {
                    b[i][j]=a[k+i][l+j];
                }
            }
        }
    }
    return 0;
}

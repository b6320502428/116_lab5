#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
    int i,j=0;
    char d[6],p[6],a[6];
    scanf("%s %s %s",&d,&p,&a);
    for(i=0; i<strlen(d); i++)
    {
        if(p[i]>48&&p[i]<58)
            j++;
    }
    for(i=0; i<strlen(p); i++)
    {
        if(p[i]>48&&p[i]<58)
            j++;
    }
    for(i=0; i<strlen(a); i++)
    {
        if(p[i]>48&&p[i]<58)
            j++;
    }
    return 0;
}

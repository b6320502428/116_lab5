#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
    int i,j,dn,pn,an;
    char d[16],p[16],a[16];
    scanf("%s %s %s",&d,&p,&a);
    /*for(i=0; i<strlen(d); i++)
    {
        if(p[i]>47&&p[i]<58)
            z++;
    }
    for(i=0; i<strlen(p); i++)
    {
        if(p[i]>47&&p[i]<58)
            z++;
    }
    for(i=0; i<strlen(a); i++)
    {
        if(p[i]>47&&p[i]<58)
            z++;
    }
    if(z==(strlen(d)+strlen(p)+strlen(a)))
    {

    }*/
    for(i=2; i<37; i++)
    {
        dn=0;
        pn=0;
        an=0;
        for(j=strlen(d)-1; j>=0; j--)
        {
            if(d[j]>47&&d[i]<58)
            {
                dn=(dn*i)+(d[j]-48);
            }
            if(d[j]>64&&d[i]<90)
            {
                dn=(dn*i)+(d[j]-55);
            }
        }
        for(j=strlen(p)-1; j>=0; j--)
        {
            if(p[j]>47&&p[i]<58)
            {
                pn=(pn*i)+(p[j]-48);
            }
            if(p[j]>64&&p[i]<90)
            {
                pn=(pn*i)+(p[j]-55);
            }
        }
        for(j=strlen(a)-1; j>=0; j--)
        {
            if(a[j]>47&&a[i]<58)
            {
                an=(an*i)+(a[j]-48);
            }
            if(a[j]>64&&a[i]<90)
            {
                an=(an*i)+(a[j]-55);
            }
        }
    }
    return 0;
}

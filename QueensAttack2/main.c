#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int slope,n,i,j,k,rq,cq,ri,ci,d=0,dhr=0,dhl=0,dvt=0,dvb=0,ddrt=0,ddrb=0,ddlt=0,ddlb=0;
    scanf("%ld%ld",&n,&k);
    long int arr[n][n];
    scanf("%ld%ld",&rq,&cq);
    dhr=n-rq;
    dhl=rq-1;
    dvt=n-cq;
    dvb=cq-1;
    if((n-rq)>(n-cq))
        ddrt=n-cq;
    else
        ddrt=n-rq;
    if((rq-1)>(n-cq))
        ddlt=n-cq;
    else
        ddlt=rq-1;
    if((rq-1)>(cq-1))
        ddlb=cq-1;
    else
        ddlb=rq-1;
    if((n-rq)>(cq-1))
        ddrb=cq-1;
    else
        ddrb=n-rq;

    for(i=0;i<k;i++)
    {
        scanf("%ld%ld",&ri,&ci);
        if((ri==rq)&&(ci<cq))
        {
            d=cq-ci-1;
            if(d<dhl)
                dhl=d;

        }
        else if((ri==rq)&&(ci>cq))
        {
            d=ci-cq-1;
            if(d<dhr)
                dhr=d;
        }
        else if((ci==cq)&&(ri<rq))
        {
            d=rq-ri-1;
            if(d<dvb)
                dvb=d;
        }
        else if((ci==cq)&&(ri>rq))
        {
            d=ri-rq-1;
            if(d<dvt)
                dvt=d;
        }
        else if((ri-rq)==(ci-cq)&&(ci>cq))
        {
            d=ri-rq-1;
            if(d<ddrt)
                ddrt=d;
        }
        else if((rq-ri)==(cq-ci)&&(ri<rq))
        {
           d=rq-ri-1;
           if(d<ddlb)
                ddlb=d;
        }
        else if((rq-ri)==(ci-cq)&&(ci>cq))
        {
            d=rq-ri-1;
            if(d<ddrb)
                ddrb=d;
        }
         else if((rq-ri)==(ci-cq)&&(ci<cq))
         {
             d=cq-ci-1;
             if(d<ddlt)
                ddlt=d;
         }

        }
        printf("%ld",dhr+dhl+dvt+dvb+ddrt+ddrb+ddlt+ddlb);
    }



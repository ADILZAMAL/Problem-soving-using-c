#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int b,w,bc,wc,z;
        scanf("%ld%ld",&b,&w);
        scanf("%ld%ld%ld",&bc,&wc,&z);
        long int cost;
        if(bc+z<wc)
           cost=b*bc+w*(bc+z);

        else if(wc+z<bc)
         cost=w*wc+b*(wc+z);

        else
         cost=w*wc+b*bc;

        printf("%ld\n",cost);


    }
}

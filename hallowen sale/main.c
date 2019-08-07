#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p,d,m,s;
    scanf("%d%d%d%d",&p,&d,&m,&s);
    int noOfGames=0;
    while(s>0)
    {
        s-=p;
        noOfGames++;
        if(p-d>m)
            p-=d;
        else
            p=m;
    }
    if(s<0)
        noOfGames--;
    printf("%d",noOfGames);
}

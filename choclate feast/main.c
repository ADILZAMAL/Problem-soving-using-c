#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,c,m;
        scanf("%d%d%d",&n,&c,&m);
        int ans=0,temp,carry=0,rap;
        temp=n/c;
        while(temp)
        {
            ans+=temp;
            rap=temp+carry;
            if(rap%m==0)
            {
                carry=0;
                temp=(rap/m);
            }
            else{
                carry=rap%m;
                temp=(rap/m);
                }
        }
        printf("%d\n",ans);
    }

}

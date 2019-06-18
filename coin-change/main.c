#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int m,n,i,j;
        scanf("%d",&m);
        int coin[m];
        for(i=0;i<m;i++)
            scanf("%d",&coin[i]);
        scanf("%d",&n);
        int table[m][n+1];

        //for 1st row of the table
        for(i=0;i<=n;i++)
        {
         if(i%coin[0]==0)
            table[0][i]=1;
         else
                table[0][i]=0;
        }


        //for the first column of the table which will
        //contain total no. of ways to give sum 0 by
        //different denomination which will be always
        //1 that is not include any coin it will give
        //sum=0
        for(i=0;i<m;i++)
            table[i][0]=1;
        for(i=1;i<m;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(j<coin[i])
                    table[i][j]=table[i-1][j];
                else
                {
                    table[i][j]=table[i-1][j]+table[i][j-coin[i]];
                }
            }
        }
        printf("%d\n",table[m-1][n]);

    }


}


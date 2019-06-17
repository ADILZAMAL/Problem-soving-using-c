#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int max(int a, int b, int c)
{
    if(a>=b&&a>=c)
        return a;
  else if(b>=a&&b>=c)
        return b;
  else return c;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,result=0,k;
        scanf("%d",&n);
        int matrix[n][n];
        int i,j;
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
            scanf("%d",&matrix[i][j]);
        int table[n][n][n];
        memset(table,0,sizeof(table));
        for(i=0;i<n;i++)
        {
            table[i][0][i]=matrix[0][i];
           for(j=1;j<n;j++)
           {
               table[i][j][0]=matrix[j][0]+max(0,table[i][j-1][0],table[i][j-1][1]);
               if(result<table[i][j][0])
                result=table[i][j][0];
               table[i][j][n-1]=matrix[j][n-1]+max(0,table[i][j-1][n-1],table[i][j-1][n-2]);
                  if(result<table[i][j][n-1])
                result=table[i][j][n-1];
            for(k=1;k<n-1;k++)
                {
                    table[i][j][k]=matrix[j][k]+max(table[i][j-1][k-1],table[i][j-1][k],table[i][j-1][k+1]);
                  if(result<table[i][j][k])
                result=table[i][j][k];
                }
        }
    }
    printf("%d\n",result);

}
}

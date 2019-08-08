#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n,k,i,j,row=0;
    scanf("%d%d",&n,&k);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        if(arr[i]%k==0)
            row+=arr[i]/k;
        else
            row+=(arr[i]/k+1);
    }
    int table[row][k];
    memset(table,0,row*k*sizeof(table[0][0]));

    int count=1,idx=0;
    for(i=0;i<row;i++)
    {
        for(j=0;j<k;j++)
        {
            table[i][j]=count;
            count++;
            if(table[i][j]==arr[idx])
            {
                count=1;
                idx++;
                break;

            }
        }
    }
    int ans=0;
    for(i=0;i<row;i++)
    {
      for(j=0;j<k;j++)
        if(table[i][j]==i+1)
            ans++;
    }
printf("%d",ans);

    }



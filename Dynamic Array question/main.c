#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k,result=0,i;
        scanf("%d%d",&n,&k);
        int arr[n];
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        bool table[n][n];
        memset(table,0,sizeof(table));

        //for subarray which contains single element

        for(i=0;i<n;i++)
        {
          if(arr[i]>k){
             table[i][i]=true;
             result++;
          }
        }


        //for subArray which contains two element
        for(i=0;i<n-1;i++)
            if(arr[i]>k||arr[i+1]>k)
        {
            table[i][i+1]=true;
            result++;
        }

        //for subArray which contains more than 3 elements
       int s,j;
      for (s = 3; s <= n; ++s)
    {
        for (i = 0; i < n-s+1 ; ++i)
        {
            j = i + s - 1;
            if (table[i+1][j-1] ||  arr[i] > k || arr[j] > k)
            {
                table[i][j] = true;
                result++;
            }
        }
    }
  printf("%d\n",result);
 }

}

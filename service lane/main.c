#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,t,i;
    scanf("%d%d",&n,&t);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    while(t--)
    {
        int j,minWidth=3;
        scanf("%d%d",&i,&j);
        for(int p=i;p<=j;p++)
        {
            if(minWidth>arr[p])
                minWidth=arr[p];
        }
        printf("%d\n",minWidth);
    }

}

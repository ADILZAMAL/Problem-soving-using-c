#include <stdio.h>
#include <stdlib.h>
int max(int a,int b)
{
    if(a>=b)
        return a;
    else
        return b;
}

int main()
{
    int n,k,result,count=0;
    scanf("%d%d",&n,&k);
    int arr[k];
     long int i,s[n];
    for(i=0;i<k;i++)
        arr[i]=0;
    for(i=0;i<n;i++)
       {
         scanf("%ld",&s[i]);
         result=s[i]%k;
         arr[result]+=1;
       }
       if(k%2!=0)
       {
        for(i=1;i<=(k/2);i++)
       count+=max(arr[i],arr[k-i]);
       }
       else
        {
        for(i=1;i<(k/2);i++)
       count+=max(arr[i],arr[k-i]);
       if(arr[k/2>0])
        count++;
        }

       if(arr[0]>0)
        count++;
       printf("%d",count);


}

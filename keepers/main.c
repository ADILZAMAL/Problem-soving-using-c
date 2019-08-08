#include<stdio.h>
#include<math.h>
#define MAX 10
int main()
{

    int p,q;
    scanf("%d%d",&p,&q);
    int i,n,j;
    for(i=p;i<=q;i++)
    {
        int arr[MAX]={0};
        int d=0;
        n=i;
        j=MAX-1;
        while(n)
        {
            arr[j]=n%10;
            n/=10;
            j--;
            d++;
        }
        int t=d,temp,carry=0;
        for(j=1;j<=d;j++)
        {
            temp=arr[MAX-j]*i+carry;
            arr[MAX-j]=temp%10;
            carry=temp/10;
        }
        while(carry)
        {
            arr[MAX-j]=carry%10;
            carry/=10;
            t++;
            j++;
        }

        int r=0,l=0;
        for(j=1;j<=d;j++)
            r+=arr[MAX-j]*(int)(pow(10,j-1));
        for(j=d+1;j<=t;j++)
            l+=arr[MAX-j]*(int)(pow(10,j-d-1));
        if((r+l)==i)
            printf("%d ",i);

    }
}

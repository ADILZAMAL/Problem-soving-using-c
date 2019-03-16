#include <stdio.h>
#include <stdlib.h>
int getmissing(int arr[],int n){
int x1=0,x2=0,i;
for(i=1;i<=n+1;i++)
    x1^=i;
for(i=0;i<n;i++)
    x2^=arr[i];
    return x1^x2;

}
int main()
{
    int arr[]={1,2,3,4,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("%d",getmissing(arr,n));
}

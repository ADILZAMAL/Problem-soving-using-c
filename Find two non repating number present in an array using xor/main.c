#include <stdio.h>
#include <stdlib.h>
void get2nonRepatingNumber(int arr[],int n,int *xor1,int *xor2){
int xor=0,i,mask;
*xor1=0,*xor2=0;
for(i=0;i<n;i++)
    xor^=arr[i];
mask=xor&-xor;
for(i=0;i<n;i++){
    if((mask&arr[i])==0)
        *xor1^=arr[i];
    else
        *xor2^=arr[i];

}

}

int main()
{
    int arr[]={2,3,7,9,11,2,3,11};
    int *xor1=(int *)malloc(sizeof(int));
    int *xor2=(int *)malloc(sizeof(int));
    int n=sizeof(arr)/sizeof(arr[0]);
    get2nonRepatingNumber(arr,n,xor1,xor2);
    printf("The non repating element are %d and %d",*xor1,*xor2);
    return 0;
}

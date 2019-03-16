/*we will solve this by XOR operation
a XOR a =0
a XOR 0 =a
0 XOR a =a
0 XOR 0 =0
a XOR b XOR a XOR b =o
a XOR b XOR a XOR b XOR a =a  */
#include <stdio.h>
#include <stdlib.h>
int findodd(int arr[],int n){
    int i=0,res=0;
    for(i=0;i<n;i++){
        res^=arr[i];      //res=res^arr[i] 0^12=12 =>12^12=0 =>0^14=14 =>14^90=c =>c^14=90 =>90^14=c =>c^14=90
    }
    return res;

}
int main()
{
    int arr[]={12,12,14,90,14,14,14};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("%d",findodd(arr,n));

}

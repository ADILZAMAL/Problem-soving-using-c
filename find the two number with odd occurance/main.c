#include <stdio.h>
#include <stdlib.h>
void getTwoNumber(int arr[],int n){
int xor=0,xor1=0,xor2=0,i;
for(i=0;i<n;i++)
    xor=xor^arr[i];  //xor will contain the xor result of the two number which are repated odd number of times
    //so two separate those two number we have to create mask which is first right bit and that is the positon 
    //where both of them are differing so appltying mask we can separte the number
    //mask for the first right bit set 
    xor=xor&-xor;
    for(i=0;i<n;i++){
        if((arr[i]&xor)==0)
            xor1=xor1^arr[i];
        else
            xor2=xor2^arr[i];
    }
    printf("Two Number with odd occurance of times are %d and %d",xor1,xor2);

}
int main()
{
    int arr[]={4,4,100,5000,4,4,4,4,100,100};
    int n=sizeof(arr)/sizeof(arr[0]);
    getTwoNumber(arr,n);
    return 0;
}

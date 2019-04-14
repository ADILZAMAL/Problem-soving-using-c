#include <stdio.h>
#include <stdlib.h>
void rightCircularRotation(int arr[],int n)
{
    int temp=arr[n-1],i;
    for(i=n-1;i>0;i--)
    arr[i]=arr[i-1];
    arr[i]=temp;

}

void printArray(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    rightCircularRotation(arr,8);
    printArray(arr,8);
}

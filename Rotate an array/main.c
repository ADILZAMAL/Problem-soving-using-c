#include <stdio.h>
void leftRotatebyOne(int arr[], int n);

void leftrotate(int arr[],int n,int d)
{   int i;
    for(i=0;i<d;i++)
        leftRotatebyOne(arr,n);

}

void leftRotatebyOne(int arr[],int n)
{
    int i,temp=arr[0];
    for(i=0;i<n-1;i++)
        arr[i]=arr[i+1];
    arr[i]=temp;
}


void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
int main()
{
  int arr[]={1,2,3,4,5,6,7,8};
  leftrotate(arr,8,2);
  printArray(arr,8);
}

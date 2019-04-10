#include <stdio.h>
#include <stdlib.h>
int binarySearch(int array[],int low,int high,int key)
{

    if(low>high)
        return -1;
        int mid=(low+high)/2;
        if(key==array[mid])
            return mid;
        else if(key>array[mid])
            return binarySearch(array,mid+1,high,key);
            return binarySearch(array,low,mid-1,key);
}
int findPivot(int array[],int n)
{
    int mid,low=0,high=n,next,prev;
    while(low<=high)
    {
       mid=low+(high-low)/2;
       next=mid+1;
       prev=mid-1;
       if(array[low]<=array[high])
        return low;
       else if((array[mid]<array[next])&&(array[mid]<array[prev]))
        return mid;
       else if(array[mid]<array[high])
        high=mid-1;
       else if(array[mid]>array[high])
        low=mid+1;

    }


}
int search(int array[],int key,int n)
{

   int result;
   result=findPivot(array,n-1);
   if(array[result]==key)
    return result;
   else if(array[n-1]<key)
       return binarySearch(array,0,result-1,key);
   else if(array[n-1]>key)
        return binarySearch(array,result+1,n-1,key);
}

int main()
{
   int array[]={6,7,8,1,2,3,4,5};

   int key=3;
   int indexOfKey;
   indexOfKey=search(array,key,8);
   printf("%d",indexOfKey);


}

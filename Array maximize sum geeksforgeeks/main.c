/*Find maximum value of Sum( i*arr[i]) with only rotations on given array allowed*/
//Rj-R(j-1)=arraySum-n*array[n-j]
//This code is written by Adil Zamal

#include <stdio.h>
#include <stdlib.h>

int maxSum(int[] ,int);

int main()
{
    int arr[] = {10, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result;
    result=maxSum(arr,n);
    printf("Maximum sum is %d\n",result);
    return 0;
}
int maxSum(int arr[],int n){
    int i,arrSum=0,curValue=0,maxValue;

    for(i=0;i<n;i++)
    {
        arrSum=arrSum+arr[i];
        curValue=curValue+i*arr[i];
    }

    maxValue=curValue;

    for(i=1;i<n;i++)
    {
        curValue=curValue+arrSum-n*arr[n-i];
        if(curValue>maxValue)
            maxValue=curValue;
    }
    return maxValue;
}


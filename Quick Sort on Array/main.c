    //This code is written by Adil Zamal..//
    
    #include <stdio.h>
    #include <stdlib.h>
    void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
    }
    int particen(int arr[],int start,int end){
    int pivot=arr[end],i;
    int j=(start-1);
    for(i=start;i<end;i++){
        if(arr[i]<=pivot)
        {
            j++;
           swap(&arr[i],&arr[j]);
           }

        }

    swap(&arr[end],&arr[j+1]);
    return j;
    }

    void quicksort(int arr[],int start,int end){
        if(start<end)
            {
    int index_pivot=particen(arr,start,end);
    quicksort(arr,start,index_pivot-1);
    quicksort(arr,index_pivot+1,end);
        }
    }

    int main()
    {
        int A[]={7,2,1,6,8,5,3,4};
        int size,i;
        size=sizeof(A)/sizeof(A[0]);
        quicksort(A,0,size-1);
        for(i=0;i<size;i++)
            printf("%d\t",A[i]);
    }

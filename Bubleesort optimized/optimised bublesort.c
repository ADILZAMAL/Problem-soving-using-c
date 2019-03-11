    # include<stdio.h>
    # include<conio.h>
    # include<stdbool.h>

    int main()
    {
        int arr[]={5,4,2,8};
        int n=sizeof(arr)/sizeof(arr[0]);
        bubleSort(arr,n);
        printf("Sorted Array;");
        printArray(arr,n);

    }
    void bubleSort(int arr[],int n)
    {
        bool swapped;
        int i,j;
        swapped=false;
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-i-1;j++)
            {
                if(arr[j]>arr[j+1])
                    swap(&arr[j],&arr[j+1]);
                    swapped=true;
            }
            if(swapped==false)
                break;
        }

    }
    void swap(int *xp,int *xy)
    {
        int temp;
        temp=*xp;
        *xp=*xy;
        *xy=temp;
    }
    void printArray(int arr[],int n)
    {
        int i;
        for(i=0;i<n;i++)
            printf("%d\t",arr[i]);
    }

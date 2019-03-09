    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
        int array[]={60,70,10,20,30,40,50};
        int size=sizeof(array)/sizeof(array[0]);
        int n,result;
        printf("Enter the element you want to search");
        scanf("%d",&n);
        int index_pivot=binary_search(array,size-1,0);
        if((n>=array[index_pivot])&&(n<=array[size-1]))


            result=binary(array,index_pivot,size-1,n);

        else

        result=binary(array,0,index_pivot-1,n);

        if(result==-1)

            printf("Element not found");

        else
            printf("Element found at index %d",result);


    }
    int binary_search(int array[],int high,int low)
    {
        int mid=low+(high-low)/2;
        if((array[mid]<array[mid+1])&&(array[mid]<array[mid-1]))
        return mid;
        else{
            if(array[low]<=array[mid-1])
                return binary_search(array,high,mid+1);
            else
                return binary_search(array,mid-1,low);
        }
    }
        int binary(int array[],int low,int high,int num)
        {
            if(low<=high)
            {

            int mid=low+(high-low)/2;
            if(array[mid]==num)
                return mid;
            else{
                if(array[mid]>num)
                    return binary(array,low,mid-1,num);
                else
                    return binary(array,mid+1,high,num);

                }

        }
        return -1;
    }

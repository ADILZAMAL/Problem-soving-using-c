#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define size 100
void display (int a[],int n);
int insertation (int a[],int,int,int);


int main()
{
    int a[size],n,k;
    printf("Enter the number of element\n");
    scanf("%d",&n);
    printf("enter the array element\n");
    for(k=0;k<n;k++)
        scanf("%d",&a[k]);
    int element,loc;
    printf("enter the number you want to put\n");
    scanf("%d",&element);
    printf("enter the location you want to put your number\n");
    scanf("%d",&loc);
    n=insertation(a,element,loc,n);
    printf("new array will contain number of element=%d\n",n);
    display (a,n);
}
int insertation(int a[],int element,int loc,int n)
{
    int k;


    if(n+1>size)
   {
       printf("OVERFLOW");
        exit(0);
   }
    else
    {


    for(k=n-1;k>=(loc-1);k--)
        a[k+1]=a[k];
    a[loc-1]=element;
    }
    n=n+1;
    return(n);


        }
void display (int a[],int n)
{
    int k;
    for(k=0;k<n;k++)
        printf("%d\t",a[k]);
}

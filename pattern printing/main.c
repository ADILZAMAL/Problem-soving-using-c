#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
int num,i,j;
printf("Enter number of lines");
scanf("%d",&num);
for(i=0;i<num;i++)
{
printf("1");
for(j=1;j<i;j++){
        if(i==num-1){
            printf("%d",j+1);
            continue;
        }
    printf("0");
}
if(i>0)
    printf("%d",i+1);
printf("\n");
}


}

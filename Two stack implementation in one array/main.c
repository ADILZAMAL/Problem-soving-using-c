#include <stdio.h>
#include <stdlib.h>
int top1=-1,top2=5;
void push1(int num,int array[]){
    if(top1+1==top2)
    {
        printf("Stack is overflow");
        return;
    }
    array[++top1]=num;
}
void push2(int num,int array[]){
    if(top1+1==top2){
        printf("stack is overflow");
        return;
    }
array[--top2]=num;
}
void pop1(){
if(top1==-1){
    printf("Stack 1 is empty");
    return;
}
top1--;
}

void pop2(){
    if(top2==5){
        printf("Stack 2 is empty");
        return;
    }
top2++;
}
void print(int array[]){
int i;
for(i=0;i<5;i++)
printf("%d\t",array[i]);
}


int main()
{
         int array[5];


         push1(5,array);
         push2(10,array);
         push2(15,array);
         push2(11,array);
         push2(7,array);
         pop2();
         push2(17,array);
         print(array);
         pop1();
         pop2();
}

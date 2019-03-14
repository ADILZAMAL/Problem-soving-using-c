#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int stk1[MAX];
int stk2[MAX];
int top1=-1;
int top2=-1;

int pop2(){
    int k=stk2[top2];
top2--;
return k;
}
void pop1(){
top1--;
}
void push1(int num){
stk1[++top1]=num;
}
void push2(int num){
stk2[++top2]=num;
}
void enqueue(int num){
    push1(num);
}
void dequeue(){
    int k;
    if(top2!=-1)
       {
        k=pop2();
        printf("Poped Element is %d",k);
       }
    else{
        while(top1!=-1)
           {
             push2(stk1[top1]);
            pop1();

           }
           k=pop2();
            printf("Poped Element is %d",k);


    }
}

int main()
{

    enqueue(1);
    enqueue(2);
    enqueue(3);
     dequeue();
    enqueue(7);
    enqueue(8);
    dequeue();

}

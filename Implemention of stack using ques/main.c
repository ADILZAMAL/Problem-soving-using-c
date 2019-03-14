/*This code is not good its working but it is completely mesh*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int q1[10];
int q2[10];
int rear1=-1,rear2=-1,front1=-1,front2=-1;
void push(int num){
    if(rear1==9){
        printf("Queue is overflow");
        return;
    }
else if(front1==-1){
    rear1++;
    front1++;
    q1[rear1]=num;
}
else{
    q1[++rear1]=num;
}
}
int pull(){
while(rear1>front1){

    if(front2==-1){
        front2++;
        q2[++rear2]=q1[front1];
        front1++;
    }
    else {

        q2[++rear2]=q1[front1];
        front1++;
    }
    }
    int k=q1[front1];
    front1=-1;
    rear1=-1;
    while(front2<=rear2){
    if(front1==-1){
    rear1++;
    front1++;
    q1[rear1]=q2[front2];
      front2++;
      }
else{
    q1[++rear1]=q2[front2];
    front2++;
}}

front2=-1;
rear2=-1;
return k;

}
int main()
{
   push(1);
   push(2);
   push(3);
   push(4);
   push(9);
   push(8);

   printf("%d\t",  pull());
   printf("%d\t",  pull());
   push(11);
   printf("%d\t",  pull());
}

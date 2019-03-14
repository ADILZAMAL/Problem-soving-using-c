#include <stdio.h>
#include <stdlib.h>
struct Node{
struct Node *next;
int data;
};
struct Node* push(int num,struct Node *p){
    struct Node *q;
q=(struct Node*)malloc(sizeof(struct Node));
q->data=num;
q->next=p;
return q;
}
struct Node* pop(struct Node*q){
printf("poped Element is %d\n",q->data);
return q->next;
}
void isempty(struct Node *q){
if(q==NULL)
    printf("Stack is Empty");
else
    printf("Stack is not empty");
}
void isfull(struct Node *q){
printf("This is Linked List implementation of stack so it can't be full");
}
int main()
{
    struct Node *top=NULL;
    top=push(3,top);
    top=push(4,top);
    top=push(8,top);
    top=pop(top);
    top=push(9,top);
    top=pop(top);
    top=pop(top);
    isempty(top);
    isfull(top);

}

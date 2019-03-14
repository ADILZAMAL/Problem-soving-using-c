#include <stdio.h>
#include <stdlib.h>
struct Node{
    struct Node *prev;
    int data;
    struct Node *next;
};

struct Node *headNode=NULL;

void insert(int num,int pos){
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=num;
    temp->prev=NULL;
    temp->next=NULL;
    struct Node *temp1=headNode;
    if(pos==1&&headNode==NULL){
        headNode=temp;
    }
    else if(pos==1&&headNode!=NULL){
        temp->next=temp1;
        temp1->prev=temp;
        headNode=temp;
        }
    else{
        pos--;
        while(--pos)
            temp1=temp1->next;
        if(temp1->next==NULL){

        temp1->next=temp;
        temp->prev=temp1;
        }
        else{
        temp1->next->prev=temp;
        temp->prev=temp1;
        temp->next=temp1->next;
        temp1->next=temp;}
    }
}
void print(){
    struct Node *temp=headNode;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}
int main()
{
    insert(1,1);
    insert(2,2);
    insert(3,3);
    insert(4,4);
    insert(6,2);
    insert(7,6);
    print();
}

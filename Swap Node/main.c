#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
    };
    struct Node *headNode=NULL;


    void insert(int num){
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=num;
    temp->next=NULL;
    if(headNode==NULL){
        headNode=temp;
        return ;
    }
    struct Node *temp1=headNode;
    while(temp1->next!=NULL)
        temp1=temp1->next;
    temp1->next=temp;
    }

     void print(){
        struct Node *temp;
        temp=headNode;
        while(temp!=NULL){
            printf("\t%d",temp->data);
            temp=temp->next;
        }
    }
    void swapNode(int a,int b){
        if(a==b)
            return;
    struct Node *aprev=NULL,*acur=NULL,*bprev=NULL,*bcur=NULL,*cur,*prev,*temp;
    cur=headNode;
    prev=NULL;
    while(cur!=NULL&&cur->data!=a){
        prev=cur;
        cur=cur->next;
        }
        aprev=prev;
        acur=cur;
        cur=headNode;
        prev=NULL;

    while(cur!=NULL&&cur->data!=b){
        prev=cur;
        cur=cur->next;
        }
        bprev=prev;
        bcur=cur;

       if(acur==NULL||bcur==NULL)
        {return ;}
        //a is present in headNode//
       else if(aprev==NULL)
        {
         temp=bcur->next;
         bcur->next=acur->next;
         headNode=bcur;
         bprev->next=acur;
         acur->next=temp;

         return;
        }
        //if b is present in headNode//
        else if(bprev==NULL)
        {
         temp=acur->next;
         acur->next=bcur->next;
         headNode=acur;
         aprev->next=bcur;
         bcur->next=temp;

         return;
        }
        //if a & b is present in middle of linked list //
        else
        {
            temp=bcur->next;
            bcur->next=acur->next;
            aprev->next=bcur;
            bprev->next=acur;
            acur->next=temp;

            return ;
        }
    }
int main()
{
insert(1);
insert(2);
insert(3);
insert(4);
insert(5);
insert(6);
insert(7);
printf("Linked List before swapping : ");
print();
printf("\n");
swapNode(1,7);
printf("After swaping linked list will become : ");
print();
}

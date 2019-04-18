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
                printf("%d\t",temp->data);
                temp=temp->next;
            }
        }
void swapNodePairWise(){
    struct Node *p,*q,*temp;
    p=headNode;
    headNode=headNode->next;
    while(headNode!=NULL){

        q=p->next;
        temp=q->next;
        q->next=p;
        if(temp==NULL||temp->next==NULL){
            p->next=temp;
            break;
        }

        p->next=temp->next;
        p=temp;
    }

    }
int main()
{           insert(1);
            insert(2);
            insert(3);
            insert(4);
            insert(5);

            swapNodePairWise();
            print();

    }

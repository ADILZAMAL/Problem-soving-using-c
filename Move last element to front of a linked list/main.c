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
void moveLastNode(){
    struct Node *temp=headNode,*p;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    p=temp->next;
    temp->next=NULL;
    p->next=headNode;
    headNode=p;
    }
        int main()
{           insert(1);
            insert(2);
            insert(3);
            insert(4);
            insert(5);
            moveLastNode();
            print();

    }

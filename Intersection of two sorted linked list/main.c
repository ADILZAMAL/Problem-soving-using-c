#include <stdio.h>
#include <stdlib.h>
 struct Node{
        int data;
        struct Node *next;
        };
        struct Node *headNode1=NULL,*headNode2=NULL;


void insert1(int num){
        struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
        temp->data=num;
        temp->next=NULL;
        if(headNode1==NULL){
            headNode1=temp;
            return ;
        }
        struct Node *temp1=headNode1;
        while(temp1->next!=NULL)
            temp1=temp1->next;
        temp1->next=temp;
        }
void insert2(int num){
        struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
        temp->data=num;
        temp->next=NULL;
        if(headNode2==NULL){
            headNode2=temp;
            return ;
        }
        struct Node *temp1=headNode2;
        while(temp1->next!=NULL)
            temp1=temp1->next;
        temp1->next=temp;
        }

//Function for printing ..//


void print(struct Node *temp){
            while(temp!=NULL){
                printf("%d\t",temp->data);
                temp=temp->next;
            }
        }


   //Function for finding the intersection of two sorted linked list ..//

    struct Node* instersection(struct Node *a,struct Node *b){
    struct Node *newHeadNode=NULL;
    while(a!=NULL&&b!=NULL){
        if(a->data==b->data){
            struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
            temp->data=a->data;
            temp->next=NULL;
        if(newHeadNode==NULL){
            newHeadNode=temp;
        }
        else{
            struct Node *temp1=newHeadNode;
            while(temp1->next!=NULL)
                temp1=temp1->next;
            temp1->next=temp;
        }
        a=a->next;
        b=b->next;
        }
        else if(a->data>b->data)
        b=b->next;
        else
            a=a->next;
    }
    return newHeadNode;
    }

int main(){
      struct Node *headNode3;
            insert1(1);
            insert1(2);
            insert1(3);
            insert1(4);
            insert1(6);
            insert2(2);
            insert2(4);
            insert2(6);
            insert2(8);
            headNode3=instersection(headNode1,headNode2);
             print(headNode3);

    }


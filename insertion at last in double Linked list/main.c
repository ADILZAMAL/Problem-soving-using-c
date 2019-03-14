#include <stdio.h>
#include <stdlib.h>
struct Node{
struct Node *prev;
int data;
struct Node *next;
};
struct Node *headNode=NULL;
void insert(int num){
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    temp->prev=NULL;
    temp->data=num;
    temp->next=NULL;
    if(headNode==NULL)
        headNode=temp;
    else{

    struct Node *temp1=headNode;
    while(temp1->next!=NULL)
        temp1=temp1->next;
    temp1->next=temp;
    temp->prev=temp1;
    }


}
void print(){
struct Node *temp=headNode;
while(temp!=NULL)
{

    printf("%d\t",temp->data);
    temp=temp->next;
}
}
int main()
{
  insert(3);
  insert(6);
  insert(9);
  insert(12);
  print();
}

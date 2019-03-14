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
if(headNode==NULL){
    headNode=temp;
}
else{
    temp->next=headNode;
    headNode->prev=temp;
    headNode=temp;

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
 insert(1);
 insert(2);
 insert(3);
 print();

}

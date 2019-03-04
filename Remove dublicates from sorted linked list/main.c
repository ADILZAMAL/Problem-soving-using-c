#include <stdio.h>
#include <stdlib.h>
struct Node{
int data;
struct Node *next;
};
struct Node *headNode=NULL;

//Function for the construction of Linked list//

void insert(int num)
{
    struct Node *temp;
    temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=num;
    temp->next=NULL;
    if(headNode==NULL)
    {
      headNode=temp;
      return ;
    }
    struct Node *temp1=headNode;
   while(temp1->next!=NULL)
        temp1=temp1->next;
        temp1->next=temp;

}

//Function for printing the linked list//

void print(){
struct Node *temp=headNode;
while(temp!=NULL)
{
    printf("\t%d",temp->data);
    temp=temp->next;
}

printf("\n");
}
void Remove_dublicate(){
struct Node *temp=headNode;
struct Node *next_next;
while(temp->next!=NULL){
     if(temp->data==temp->next->data)
     {
         next_next=temp->next->next;
         free(temp->next);
         temp->next=next_next;
     }
     else
     temp=temp->next;
     }

}


int main()
{
    //insertion for the linked list//
    insert(1);
     insert(1);
    insert(2);
      insert(2);
     insert(2);
    insert(3);
    insert(4);
    insert(5);
        print();
    Remove_dublicate();
    print();


}

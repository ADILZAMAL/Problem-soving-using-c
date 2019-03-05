     //Remove dublicate from unsorted linked list//       


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
        void RemoveDublicate(){
            struct Node *temp=headNode,*prev,*del;
            struct Node *temp1=NULL;
            while(temp!=NULL){
                    temp1=temp->next;
                    prev=temp;
            while(temp1!=NULL)
            {
                if(temp->data==temp1->data)
                {
                    prev->next=temp1->next;
                    del=temp1;
                    temp1=temp1->next;
                    free(del);
                    }

                else
                    {
                        temp1=temp1->next;
                        prev=prev->next;
                    }


            }
            temp=temp->next;
            }
        }


        int main()
        {
            insert(10);
            insert(11);
            insert(11);
            insert(12);
            insert(11);
            insert(5);
            insert(3);
            insert(4);
            insert(4);
            RemoveDublicate();
            print();

        }

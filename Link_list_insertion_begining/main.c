   
   //insertion of node at the begining of Linked list..//
   //This code is written by Adil Zamal..//
   
    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
        printf("How many number you want to insert:");
        int n;
        scanf("%d",&n);
        int i,num;
        for(i=0;i<n;i++)
        {
            scanf("%d",&num);
            insert(num);
        }
        print();
    }
    struct node{
    int data;
    struct node *next};
    struct node *headNode=NULL;


    void insert(int num){
        struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=num;
    temp->next=headNode;
    headNode=temp;




    }
    void print(){
    struct node *temp=headNode;
    while(temp->next!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
        if(temp->next==NULL)
            printf("%d",temp->data);

    }


    }
    int main()
    {

    }



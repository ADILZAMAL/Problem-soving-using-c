    #include <stdio.h>
    #include <stdlib.h>

    struct node{
    int data;
    struct node *next;};
    struct node *headNode=NULL;
    void insert(int num)
    {
        struct node *temp;
        temp=(struct node*)malloc(sizeof(struct node));
        temp->data=num;
        temp->next=NULL;
        if(headNode==NULL)
            headNode=temp;

        else {
            struct node *temp2=headNode;
            while(temp2->next!=NULL)
                temp2=temp2->next;
            temp2->next=temp;

        }
    }
    void print()
    {
        struct node *temp3=headNode;
        while(temp3->next!=NULL)
            {
            printf("%d\t",temp3->data);
            temp3=temp3->next;
            }
        if(temp3->next==NULL)
            printf("%d\n",temp3->data);
    }
    void reverselinklist(struct node *p)
    {
        if(p->next==NULL){
            headNode=P;
            return ;
        }
        reverselinklist(p->next);
        struct node *temp2;
        temp2=p->next;
        temp2->next=p;
        p->next=NULL;
    }


    int main()
    {
        printf("First create a link list\n");
        printf("How many number you want to insert in to the link list:");
        int n;
        scanf("%d",&n);
        int i,num;
        for(i=0;i<n;i++)
        {
            printf("Enter the number:");
            scanf("%d",&num);
            insert(num);
        }
        printf("You have created link list which is:");
        print();
        reverselinklist(struct node *headNode);
        print();
    }

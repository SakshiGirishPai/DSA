// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// struct Node
// {
//     int data;
//     struct Node* next;
// };
// typedef struct Node* Node;
// Node getnode()
// {
//     Node newnode=(Node)malloc(sizeof(Node));
//     if(newnode==NULL)
//     {
//         printf("not created");
//         exit(0);
//     }
//     return newnode;
// }
// Node getdata(Node newnode)
// {
    
//     printf("enter the data\n");
//     scanf("%d",&newnode->data);
//     newnode->next=NULL;
//     return newnode;
// }
// Node insert_end(Node head)
// {
//     Node newnode;
//     newnode=getnode();
//     newnode=getdata(newnode);
//     if(head==NULL)
//     {
//         head=newnode;
//         return head;
//     }
//     Node temp=head;
//     while(temp->next!=NULL)
//     {
//        temp=temp->next;
//     }
//     temp->next=newnode;
//     return head;
// }

// Node reverse(Node head)
//   {
//        struct Node *prev=NULL;
//        struct  Node *cur=head,*next=NULL;
//        if(head==NULL||head->next==NULL)
//        {
//         return head;
//        }
//         while(cur!=0)
//         {
//             next=cur->next;
//             cur->next=prev;
//             prev=cur;
//             cur=next;
//         }
//         return prev;
//     }
// void display(Node head)
// {
//     Node temp=head;
  
//     while(temp!=0)
//     {
//         printf("%d ",temp->data);
//         temp=temp->next;
//     }

// }
// int main()
// {
//     Node head=NULL;
//     int c;

//     while(1)
//     {
//         printf("\n1.insert 2.display 3.reverse\n");
//         scanf("%d",&c);
//         switch(c)
//         {
//             case 1:head=insert_end(head);
//             break;
//             case 2:display(head);
//             break;
//             case 3:head=reverse(head);
//             break;
//             default:exit(0);
//             break;
//         }
//     }
// }
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int n;
    struct node *next;
};
struct node* getnode()
{
    return ((struct node *)malloc(sizeof(struct node)));
}
void read_info(struct node *p)
{
    scanf("%d",&p->n);
}
struct node* insert_front(struct node *head)
{
    struct node*nw;
    nw=getnode();
    read_info(nw);
    if(head==NULL)
    {
        head=nw;
        nw->next=NULL;
    }
    else 
    {
    nw->next=head;
    head=nw;
    }
    return head;

}
void printlist(struct node *head)
{
    struct node *temp=head;
    while(temp!=0)
    {
        printf("%d ",temp->n);
        temp=temp->next;
    }
}
int main()
{
    struct node *head=NULL;
    int ch;
    do
    {
        printf("enter the choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 0: break;
            case 1: head=insert_front(head);
            break;
            case 2: printlist(head);
            break;
        }
    }
    while(ch!=0);
}
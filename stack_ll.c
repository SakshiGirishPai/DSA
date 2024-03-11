#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node*next;
}*Node;
Node getnode()
{
    Node newn=(Node)malloc(sizeof(struct node));
    if(newn==NULL)
        exit(0);
        scanf("%d",&newn->data);
        newn->next=NULL;
        return newn;
}
Node PUSH(Node head)
{
    Node newn=getnode();
    if(head==NULL)
    {
        head=newn;
        return head;
    }
    else{
        newn->next=head;
        head=newn;
        return head;
    }
}
Node POP(Node head)
{
     if(head==NULL)
    {
      printf("\nStack is empty cannot delete");
      return head;
    }
    Node cur=head;
    head=head->next;
    printf("\nDeleted %d",cur->data);
    free(cur);
    return head;
}
void display(Node head)
{
    if(head==NULL)
     {
      printf("\nStack is empty ");
      return ;
    }
    while(head)
    {
        printf("\n%d",head->data);
        head=head->next;
    }

}
int main()
{
    Node head=NULL;

    int c;


    while(1)
    {
        printf("\nEnter the choice");
        scanf("%d",&c);
        switch(c)
        {
            case 1:head=PUSH(head);
                break;
            case 2:head=POP(head);

                break;
            case 3:display(head);
               break;
               default:exit(0);

        }
    }
}

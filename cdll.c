
#include<stdio.h>
#include<stdlib.h>
typedef  struct Node
{
    int data;
    struct Node*prev;
    struct Node*next;
}*Node;
Node getnode()
{
    Node t;
    t=(Node*)malloc(sizeof(struct Node));
    if(t==NULL)
    exit(0);
    return t;
}
Node getdata()
{
   Node t;
   t=getnode();
   scanf("%d",&t->data);
   t->next=t;
   t->prev=t;
   return t;
}
Node insert_front(Node head)
{
    Node t;
    t=getdata();
    if(head==NULL)
       return t;
    Node last=head->prev;

    last->next=t;
    t->prev=last;
    t->next=head;
    head->prev=t;
    head=t;
    return head;
}
Node insert_end(Node head)
{
    Node t;
    t=getdata();
    if(head==NULL)
       return t;
  Node last=head->prev;

    last->next=t;
    t->prev=last;
    t->next=head;
    head->prev=t;


    return head;
}
Node insert_pos(Node head)
{
      Node t;
    t=getdata();
       int pos;
       printf("Enter the position");
       scanf("%d",&pos);
    if(head==NULL&&pos==1)
       return t;

      Node prev=NULL;
      Node cur=head;
      int c=1;
      while(cur->next!=head&&c<pos)
      {
         prev=cur;
         cur=cur->next;
         c++;
      }
      if(pos==1)
        head=insert_front(head);
      else if(pos>1&&cur->next!=head)
      {
          prev->next=t;
          t->prev=prev;
          cur->prev=t;
          t->next=cur;
      }
      else if(cur->next==head&&c+1==pos)
      {
          cur->next=t;
          t->prev=cur;
          t->next=head;
          head->prev=t;
      }
      else
        printf("Invalid position");
      return head;
}

Node delete_front(Node head)
{
    if(head==NULL)
        return NULL;
    if(head->next==head&&head->prev==head)
   {
        free(head);
    return NULL;
   }
   Node tail=head->prev;
   tail->next=head->next;
   head->next->prev=tail;
   free(head);
   head=tail->next;
   return head;

}
Node delete_end(Node head)
{
    if(head==NULL)
        return NULL;
    if(head->next==head)
   {
        free(head);
    return NULL;
   }
   Node tail=head->prev;
  tail->prev->next=head;
  head->prev=tail->prev;
  free(tail);
   return head;

}
Node delete_pos(Node head)
{

    if(head==NULL)
        return NULL;
       int pos;
       printf("Enter the position to be deleted");
       scanf("%d",&pos);
    if(head->next==head&&head->prev==head&&pos==1)
    {  free(head);
       return NULL;
    }
      Node prev=NULL;
      Node cur=head;
      int c=1;
      while(cur->next!=head&&c<pos)
      {
         prev=cur;
         cur=cur->next;
         c++;
      }
      if(pos==1)
        head=delete_front(head);
      else if(pos==c)
      {
          prev->next=cur->next;

          cur->next->prev=prev;
          free(cur);

      }

      else
        printf("Invalid position");
      return head;
}
void display_forward(Node head)
{
    if(head==NULL)
        return;
    Node temp=head;
 do
    {
        printf(" %d",temp->data);
       temp=temp->next;
    }while(temp!=head);
}
void display_reverse(Node head)
{
    if(head==NULL)
        return;
    Node temp=head->prev;
 do
    {
        printf(" %d",temp->data);
       temp=temp->prev;
    }while(temp!=head->prev);
}
int main()
{
    Node head=NULL;
    int n;

    while(1)
    {
     printf("1.insert_front\n2.insert_end");
     scanf("%d",&n);
     switch(n)
     {
         case 1:head=insert_front(head);
         break;
         case 2:head=insert_end(head);
         break;
         case 3:display_forward(head);
         break;
         case 4:display_reverse(head);
         break;
         case 5:head=insert_pos(head);
         break;
         case 6:head=delete_front(head);
         break;
         case 7:head=delete_end(head);
         break;
         case 8:head=delete_pos(head);
         break;
         default:exit(0);
         break;
     }
    }
}

#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int data;
    struct Node*next;
}*Node;
Node getnode()
{
    Node n;
    n=(Node)malloc(sizeof(struct Node));
    if(n==NULL)
    exit(0);
    return n;
} 
Node getdata()
{
    Node n=getnode();
    scanf("%d",&n->data);
    n->next=NULL;
    return n;
}
Node insert_end(Node head)
{
    Node n=getdata();
    if(head==NULL)
    return n;
    Node t=head;
    while(t->next)
    {
        t=t->next;
    }
    t->next=n;
    return head;
}
Node delete(Node head,int n)
{
    Node p=head;
    Node c=head->next;
    //Node ne=NULL;
while(c&&n--)
{
    p->next=c->next;
    c->next=NULL;
    free(c);
    c=p->next;
}
return head;

}
Node delete_m(Node head,int m,int n)
{
  Node  t=head;
  int k;
  while(t)
  {
   k=m-1;
    while(k--)
    {
        t=t->next;
    }
    t=delete(t,n);
    t=t->next;
  }
  return head;
}
void display(Node head)
{

    Node temp=head;
    while(temp!=NULL)
    {
      printf("%d ",temp->data);
      temp=temp->next;
    }
}
int main()
{
    Node head=NULL;
    int n,a,b;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    head=insert_end(head);
    display(head);
 scanf("%d %d",&a,&b);
 head=delete_m(head,a,b);
 display(head);
}

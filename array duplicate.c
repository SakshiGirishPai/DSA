#include<stdio.h>
#include<limits.h>
void Read(int A[10],int n);
void Print(int A[10],int n);
void search(int A[10],int n);
main()
{
    int n,A[10],s;
    printf("enter the number and searching number");
    scanf("%d",&n);
    Read(A,n);

    search(A,n);
}
void Read(int A[10],int n)
{
    for(int i=0;i<n;i++)

        scanf("%d",&A[i]);

}
void Print(int A[10],int n)
{

    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
}
void search(int A[10],int n)

{
   // int c=0;
   int v=INT_MAX;

    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
    {
        if(A[i]==A[j])
        {
       if(v==A[i])
        break;
        printf("%d ",A[i]);//duplicate elements
        v=A[i];




    }
       // printf("\n%d is present %d times",s,c);


}
}

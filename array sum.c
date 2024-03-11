#include<stdio.h>
void Read(int A[10],int n);
void Print(int A[10],int n);
void odd_even(int A[10],int n);
main()
{
    int n,A[10];
    printf("enter the number");
    scanf("%d",&n);
    Read(A,n);
    Print(A,n);
    odd_even(A,n);
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
        printf("%d",A[i]);
    }
}
void odd_even(int A[10],int n)

{
    int e=0,o=0;

    for(int i=0;i<n;i++)
    {
        if(A[i]%2==0)
            e=e+A[i];
        else
            o=o+A[i];
    }
        printf("even %d",e);
         printf("odd %d",o);


}

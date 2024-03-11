#include<stdio.h>
void Read(int a[10],int n);
void Print(int a[10],int n);
void ase(int a[10],int n);
main()
{
    int n,a[10];
    printf("enter the number");
    scanf("%d",&n);
    Read(a,n);
    Print(a,n);
    ase(a,n);
}
void Read(int a[10],int n)
{
    for(int i=0;i<n;i++)

        scanf("%d",&a[i]);

}
void Print(int a[10],int n)
{

    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
void ase(int a[10],int n)

{
    int x,y, s=a[0];
    for(int i=0;i<n-1;i++)
    {

        y=a[i+1];
        if(s<y)
        s=y;

    }
    printf("%d",s);

}

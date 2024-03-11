#include <stdio.h>
#include <stdlib.h>
void read(int a[100][100],int m,int n);
void prime(int a[100][100],int m,int n);
int check(int p);

void print(int a[100][100],int m,int n);

int main()
{
    int a[100][100],n,m,l,s[100];
scanf("%d%d",&m,&n);
if(n<0||m<0)
{
    printf("Invalid");
    exit(0);
}
  read(a,m,n);
  prime(a,m,n);
  print(a,m,n);
 return(0);
}
void read(int a[100][100],int m,int n)
{
    for(int i=0;i<m;i++)
       {
        for(int j=0;j<n;j++)
        scanf("%d",&a[i][j]);
      }
}
void prime(int a[100][100],int m,int n)
{
    int p;
     for(int i=0;i<m;i++)
       {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                p=check(a[i][j]);
                if(p==0)
                {
                  a[i][j]=a[i][j]+1;
                  prime(a,m,n);
              }
        }
       }
}}
int check(int p)
{
    for(int i=2;i<=p/2;i++)
    {
        if(p%i==0)
        {
            return 0;
            break;
        }}
        if(p==1)

            return 0;

           return 1;

}
void print(int a[100][100],int m,int n)
{
     for(int i=0;i<m;i++)
       {
        for(int j=0;j<n;j++)
        {
        printf("%d ",a[i][j]);
}printf("\n");
}}

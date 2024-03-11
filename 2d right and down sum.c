#include<stdio.h>
#include<stdlib.h>
void read(int a[10][10],int m,int n);
void print(int a[10][10],int m,int n);
int sum(int a[10][10],int m,int n);
main()
{
     int a[10][10],m,n,s;
    scanf("%d%d",&n,&m);

    printf("enter the elements of matrix");
    read(a,m,n);
    print(a,m,n);


    s= sum(a,m,n);
    printf("%d",s);

}
 void read(int a[10][10],int m,int n)
{
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
    scanf("%d",&a[i][j]);
}

void print(int a[10][10],int m,int n)
{
      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
    printf("%d\t",a[i][j]);
    printf("\n");}
}
int sum(int a[10][10],int m,int n)
{
    int sum=0,max=a[0][0],p,q,i=0,j=0;
    while(i<m&&j<n)
        {
          sum=sum+max;
    if(i==m-1)
    {
        max=a[i][j+1];
            p=i;
            q=j+1;
    }
     else if(j==n-1)
    {
        max=a[i+1][j];
            p=i+1;
            q=j;
    }
          else if(a[i][j+1]>a[i+1][j])
          {
            max=a[i][j+1];
            p=i;
            q=j+1;
        }
          else if(a[i][j+1]<a[i+1][j])

   {
            max=a[i+1][j];
            p=i+1;
            q=j;
          }
          else if(a[i][j+1]==a[i+1][j])
            {
            max=a[i+1][j+1];
            p=i+1;
            q=j+1;
          }
          i=p;
          j=q;
        }
        return sum;
}

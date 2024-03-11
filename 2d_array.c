#include <stdio.h>
#include <stdlib.h>
void read(int a[100][100],int m,int n);

void print(int s[100],int m);
int least(int s[100],int m);
void pri(int a[100][100],int m,int n)
{
    for(int i=0;i<m;i++)
       {
        for(int j=0;j<n;j++)
        printf("%d ",a[i][j]);
        printf("\n");
        }
}
 main()
{
int a[100][100],n,m,l,s[100];
scanf("%d%d",&m,&n);
if(n<0||m<0)
{
    printf("Invalid");
    exit(0);
}
  read(a,m,n);
  pri(a,m,n);
}
void read(int a[100][100],int m,int n)
{
    for(int i=0;i<m;i++)
       {
        for(int j=0;j<n;j++)
        scanf("%d",&a[i][j]);
        }
}




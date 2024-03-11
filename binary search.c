#include <stdio.h>
void read(int a[10],int n);
void print(int a[10],int n);
void sort(int a[10],int n);
int bi(int a[10],int n,int k);

main()
{
    int a[10],n,k,b;
    scanf("%d",&n);
    read(a,n);
    print(a,n);
    sort(a,n);
    scanf("%d",&k);

    b=bi(a,n,k);
    if(b==1)
        printf("key found");
}
void read(int a[10],int n)
{
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
}
void print(int a[10],int n)
{
      for(int i=0;i<n;i++)
    printf("%d",a[i]);
}
void sort(int a[10],int n)
{
  for(int i=0;i<n;i++)
  {int t;
      for(int j=i+1;j<n;j++)
      {
          if(a[i]>a[j])
          {
            t=a[j];
          a[j]=a[i];
          a[i]=t;
          }

      }
      printf("%d",a[i]);
  }
}
int bi(int a[10],int n,int k)
{int l=0,h=n-1,mid;
while(l<=h)
{

    mid=(l+h)/2;
    if(k<a[mid])
        h=mid-1;
    if(k>a[mid])
        l=mid+1;
    if(k==a[mid])
        return 1;

}}

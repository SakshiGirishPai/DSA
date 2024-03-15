
#include<stdio.h>
#include<math.h>
int binary(int,int);
main()
{
    int n,a,u;
    scanf("%d%d",&n,&u);
    a=binary(n,u);
}
int binary(int n,int u)
{
    int i=0,a=0,m,d,v,rev=0,c=0,ld;
    m=n;
    while(n>0)
    {
        d=n%10;
        a=a+d*(pow(2,i));
        n=n/10;
        i++;
    }
    printf("%d\n",a);
    i=1;

    while(u>0)
    {


        v=u%2;

        u=u/2;
        c=c*10+v;
      }
        printf("%d",c);

    return 0;
}

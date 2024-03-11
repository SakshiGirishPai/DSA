//lcm and gcd
#include<stdio.h>
int gcd(int,int);
main()
{
  int n ,m;
  scanf("%d%d",&m,&n);
  m=gcd(m,n);
  printf("gcd=%d",m);
}

int gcd(int m,int n)
{
    int r=0,l,mi,ni;
    mi=m;
    ni=n;

    while(n>0)//85 and 15
    {
        r=m%n;
        m=n;
        n=r;

    }
    l=(mi*ni)/m;
    printf("lcm=%d\n",l);
    return m;
}

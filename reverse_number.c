#include<stdio.h>
#include<stdlib.h>
static int sum=0;
void rev(int n)
{
    if(n==0)
    return ;
   int rem=n%10;
   sum=sum*10+rem;
   rev(n/10);
}
int main()
{
    int n;
    scanf("%d",&n);
    rev(n);
   printf("%d",sum);
}

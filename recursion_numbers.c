#include<stdio.h>
void num(int n);
int main(void)
{
    int n;
    scanf("%d",&n);
    num(n);
}

void num(int n)
{
    if(n<1)
    return;
     //printf("%d",n);
    num(n-1);
      printf("%d",n);
}

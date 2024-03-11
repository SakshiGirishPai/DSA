#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void num(int n);

int main()
{
   int n;
   scanf("%d",&n);
   num(n);
   return  0;
}
void num(int n)
{

int i,k,j;
for( i=1;i<=n;i++)
{


for(k=1;k<=n;k++)
{
    if(k+i>n)
    {
     printf("*");
    }
    else
    printf(" ");
}

printf("\n");
}

}

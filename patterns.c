
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


    for( k=1;k<=n;k++)
    {
      if(i%2!=0&&k%2!=0)
     {

      for(j=n-1;j>=0;j--)

        printf(" ");}
        else
            printf(" *");
    if(i%2==0&&k%2==0)
    printf("*");
    else
        printf(" ");


    }


printf("\n");
}

}

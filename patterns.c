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


    for( k=1;k<=2*n-1;k++)
    {
      if(i%2!=0&&k%2!=0&&k>=n-(i-1)&&k<=n+(i-1))
     
            printf(" *");
    if(i%2==0&&k%2==0&&k>=n-(i-1)&&k<=n+(i-1))
    printf(" * ");
    else
        printf(" ");


    }



printf("\n");
}

}

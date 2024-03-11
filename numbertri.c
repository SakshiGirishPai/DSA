#include <stdio.h>
void num(int n);

int main()
{
   int n;
   scanf("%d",&n);
   num(n);
   return  0;
}
// void num(int n)
// {

// int i,k,j;
// for( i=1;i<=n;i++)
// {
// for(int s=0;s<=n-i;s++)
// {
//   printf(" ");
// }
// for(j=i;j>=1;j--)
// {
//     printf("%d",j);
//     }
//     for(j=2;j<=i;j++)
//     {printf("%d",j);
//     }
 
// printf("\n");
// }}

void num(int n)
{

int i,k,j,s;
for( i=1;i<=n;i++)
{
for(int s=0;s<=n-i;s++)
{
  printf(" ");
}
if(i==1)
printf("1");
else
{
for(j=i;j<=2*i-1;j++)
{
    printf("%d",j);
    }
    for(j=j-2;j>=i;j--)
    {printf("%d",j);
    }}
 
printf("\n");
}}




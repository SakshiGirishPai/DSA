#include<stdio.h>
int main()
{

   int n,m;
   scanf("%d",n);
   for(int i=0;i<2*n;i++)
   {
      if(i<n)
    m=2*i+1;
    else
     m=2*n-i;

    for(int s=0;s<(n-m);s++)
    {

    printf(" ");

    }
   //  if(i<n)
   //  t=2*i+1;
   //  else
   //  t=
  for(int j=0;j<m;j++)
  {
  printf("*");

}
printf("\n");
}
return 0;
}


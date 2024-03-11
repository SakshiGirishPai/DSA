#include <stdio.h>
#include<math.h>
int prime(int);
int prime(int i)
{
    int j;
    for(j=2;j<=i/2;j++)
    {

        if(i%j==0)
        {
            return 0;
            break;
        }



        //return 1;
    }
if(i==1)
    return 0;

            return 1;
}
int main()
{
    int n,m,p;
    scanf("%d%d",&m,&n);
    for(int i=m;i<=n;i++)
    {
       p= prime(i);
        if(p==1)
            printf("%d\n",i);

    }
}

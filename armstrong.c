#include<stdio.h>
#include<math.h>
void arm();
int main()
{




    arm();

return 0;
}

void arm()

{
    int n=1,a=0,d,i=1;
    for (i=1;i<=500;i++)
    {
       i=n;
        while(i!=0)
        {

      d=i%10;
       a=a+pow(d,3);
       i=i/10;
       }
        if(a==n)
         printf("armstrong numbers are=%d\n ",n);
         n=n+1;
         d=0;
         a=0;
         i++;

    }

}





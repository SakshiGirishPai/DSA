// count the number of persons age between 50 to 60
#include<stdio.h>
int count(int);
main()
{
    int n,c;
    printf("enter the age");
    scanf("%d",&n);
    if(n==0)
    {
        printf("invalid input");
        exit(0);
    }
    c= count(n);
    printf("count=%d\n",c);
}
int count(int n)
{
    int a,c=0,i=1;
    while (i<=n)
    {
        scanf("%d",&a);
       if (a>=50&&a<=60)
       {
        c++;
       }
         i++;
    }

    return c;
}


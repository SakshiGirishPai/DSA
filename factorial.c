#include<stdio.h>
int factorial(int);
main()
{
    int n,f;
    printf("enter the number");
    scanf("%d",&n);
    f=factorial(n);
    printf("factorial of %d number=%d\n",n,f);//we can even call in printf like factorial(n)
}
int factorial(int n)
{
    int i=1,f=1;
    while(i<=n)
    {
        f=f*i;
        i++;
    }
    return f;
}

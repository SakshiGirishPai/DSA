// a five digit number is entered through the keyboard reverse the number and check whether two num are equal or not
#include<stdio.h>
main()
{
    int a,r,x;
    int p,q,s,z;
    scanf("%d",&a);
    p=a%10;
    q=a/10%10;
    s=a/10/10%10;
    z=a/10/10/10%10;
    r= a/10/10/10/10;
    x=p*10000+q*1000+s*100+z*10+r;
    printf("r=%d",x);
    if(a==x)
        printf("numbers are equal");
    else
        printf("numbers are not equal");

}

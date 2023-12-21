#include<stdio.h>
int factorial(int x);
int main()
{
    int f1=1,f2=1,f3=1,comb;
    int x,r;
    printf("enter the n and r:\n");
    scanf("%d%d",&x,&r);
    f1=factorial(x);
    f2=factorial(x-r);
    f3=factorial(r);
    comb=f1/(f2*f3);
    printf("the combination is :%d",comb);
    return 0;
}
int factorial(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*1;
    }
    return fact;
}
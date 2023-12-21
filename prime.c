#include<stdio.h>
int prime_composite(int);
int main()
{
    int n,flag=0;
    printf("enter the number:");
    scanf("%d",&n);
    if(flag==0)
    {
        printf("even");
    }
    
    else
    {
        printf("odd");
    }
    return 0;
}
int prime_composite(int n)
{
    
    if(n%2==0)
    {
        return 0;
    }
    else {
        return 1;
    }
}
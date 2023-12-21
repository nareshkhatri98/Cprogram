#include<stdio.h>

int main()
{
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    printf("the factroial of %d is :%d",a,factorial(a));
    return 0;
}

 
int factorial(int x)
{
   if(x<=1)
   {
      return 1;
   }
   return (x * factorial(x-1));
}
 
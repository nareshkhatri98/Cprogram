#include<stdio.h>
void fun(int *n);
void main()
{
    int a=5;
    printf("Before calling a:%d\n",a);
    fun(&a);
    printf("After calling a:%d\n",a);
}
void fun(int *a)
{
    *a=(*a)+5;
    printf("the final valye in fun() is:%d\n",*a);
}
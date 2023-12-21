#include<stdio.h>
void fun(int a);
void main()
{
    int a=10;
    printf("Before calling a=%d\n",a);
    fun(a);
    printf("After callina a=%d\n",a);
}
void fun(int a)
{
a=a+5;
printf("the finale value is=%d\n",a);
}
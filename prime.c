#include<stdio.h>
int main()
{
    int x=3,y;
    y=(++x)+(x++);
    printf("the value of is=%d",y);
    return 0;
}
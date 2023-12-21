//wap toim find largewst and samllest number in arry using DMA
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,small,large;
    int *p;
    printf("enter the size:");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));

    printf("enter the nu8mber:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
        large= small=0;
    }
  

    for(i=0;i<n;i++)
    {
        if(p[i]>large)
            large=p[i];
        if(p[i]<small)
            small=p[i];
    }
    printf("the largest number is:%d\n",large);
    printf("the smallest nnumber is :%d",small);
   // free(p);
    return 0;


}


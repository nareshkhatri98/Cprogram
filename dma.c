#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    double *data;
    printf("enter the numbers of element\n");
    scanf("%d",&n);
    
    data=(double*)calloc(n,sizeof(double));

    if(data==NULL)
    {
        printf("Memory not allocate");
        exit(0);
    }

     for(int i=0;i<n;i++)
     {
        printf("enter the number:%d",i + 1);
        scanf("%lf",&data + i);
     }

    for(int i=0;i<n;i++)
    {
        if(*data < *(data + i))
        {
            *data=*(data + i);
        }
    }
    printf("largest number is=%2lf",*data);
    return 0;
}
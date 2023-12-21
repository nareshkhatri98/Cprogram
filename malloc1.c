#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,age;
    int*p;
    p=(int*)malloc(5*sizeof(int));
    for(i=0;i<5;i++)
    {
        printf("enter the age of student:");
        scanf("%d",&p[i]);
    }
    for(i=0;i<5;i++)
    {
        if(p[i]>18 && p[i]<25)
        {
           printf("%d\n",p[i]);
        }
        
    }
    free(p);
    return 0;
}
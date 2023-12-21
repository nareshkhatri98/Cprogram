#include<stdio.h>
 int sum(int arr[]);
void output(int arr[]);

int main()
{
    int arr[5],i,s;
    printf("enter the number:");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&arr[i]);
    }
   output(arr);
   printf("\n");
   s=sum(arr);
   printf("the nsum is=%d",s);
   printf("\n");
   return 0;
}
int sum(int arr[])
{
    int i,sum=0;
    for(i=0;i<=4;i++)
    {
        sum=sum+arr[i];
    }
    return(sum);
}

void output(int arr[])
{
    int i;
    printf("the entred number are:");
    for(i=0;i<=4;i++)
    {
        printf("%d\t",arr[i]);
    }
}
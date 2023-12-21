#include<stdio.h>
int main()
{
    int arr[100],i,counteven=0,countodd=0;
    printf("enter the 25 number:");
    for(i=0;i<25;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        counteven++;
        else
        countodd++;
    }
    printf("Theeven number=%d\n",counteven);
    printf("the odd number =%d",countodd);
    return 0;
}
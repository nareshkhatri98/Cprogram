#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,arr[]={1,3,4,5,6,7,8,9,0},n;
    printf("eter the size :");
    scanf("%d",&n);
    //printf("enter the number:");
    for (i=0;i<n;i++)
    {
     if (n==arr[i])
     {
        printf("the search index=%d",i);
        break;
     }
     if(arr[i]==n)
     {
        printf("not found");
     }
    }
    return 0;
    
    

}
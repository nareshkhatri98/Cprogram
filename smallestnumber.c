#include<stdio.h>
int minimum(int []);

int main()
{
  int a[5],i,small;
  printf("enter the number:");
  for(i=0;i<=5;i++)
  {
    scanf("%d",&a[i]);
  }
  small=minimum(a);
  printf("the smallest number is=%d",small);
return 0;
}  
int minimum(int arr[])
{
    int i,minimum;
    minimum=arr[0];
    for(i=0;i<=5;i++)
    {
        if(minimum>arr[i])
        {
            minimum=arr[i];
           
        }
    }
    return(minimum);
        }

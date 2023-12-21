//c prohram to sort number in ascending order by using DMA malloc function. use free to realse memory
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n,temp;
    int *p;
    printf("enter the value of n:");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("enter the number:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(p[i]>p[j])
            {
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
  }
  printf("the ascending order is:");
  for(i=0;i<n;i++)
  {
    printf("%d",p[i]);
  }
  free(p);
  return 0;
}

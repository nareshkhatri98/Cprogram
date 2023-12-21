#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,min,mix;
    int *p;
   
  
    p=(int*)malloc(n*sizeof(int));
   
    for(i=0;i<=10;i++)
    {
        printf("enter the number:");
        scanf("%d",&p[i]);
    }
    min=mix=0;
    for(i=0;i<=10;i++)
    {
        if(p[i]>mix)
        {
            mix=p[i];
        }
        if(p[i]<min)
        {
        min=p[i];
        }
   printf("maximumis=%d",mix);
   printf("minimum is =%d",min);
   return 0;    
}

}
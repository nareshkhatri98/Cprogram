#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,n,large,small;
int *a;
printf("How many elements:");
scanf("%d",&n);
a=(int*)malloc(n*sizeof(int));
printf("Enter the Array:");
 
for(i=0;i<n;++i)

scanf("%d",&a[i]);
large=small=a[0];

for(i=1;i<n;++i)
{
if(a[i]>large)
large=a[i];
if(a[i]<small)
small=a[i];
}
printf("The largest element is %d",large);
printf("\nThe smallest element is %d",small);
 free(a);
return 0;
}
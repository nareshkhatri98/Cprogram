//read a number from the user and store in file.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,size;
    FILE *fp;
    fp=fopen("number.txt","w");
    printf("how many number do yoou want\n");
    scanf("%d",&size);
    for(i=1;i<=size;i++)
    {
        printf("enter %d number\n:",i);
        scanf("%d",&n);
        fprintf(fp,"%d",n);
    }
    fclose(fp);
    return 0;
}

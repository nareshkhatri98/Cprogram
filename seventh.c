//read the arry from user and stire in file
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[10],i;
    FILE *fp;
    fp=fopen("arry.txt","wb");
    if(fp==NULL)
    {
        printf("\ncannot open file");
        exit(1);
    }
    printf("enter the number:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    fwrite(arr,sizeof(int),10,fp);
    fclose(fp);
    return 0;

    

    }
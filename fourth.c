//read data from the file.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,size;
    FILE *fp;
    fp=fopen("number.txt","r");
  // while(!feof(fp))
    {
    fscanf(fp,"%d",&n);
    printf("%d",n);

    }
    fclose(fp);
    return 0;
}

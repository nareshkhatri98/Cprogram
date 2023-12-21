//read the string from the file
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[100];
    FILE *fp;
    fp=fopen("string.txt","r");
    if(fp==NULL)
    {
        printf("\ncannot open file");
        exit(1);
    }
    fgets(str,100,fp);
    printf("file contains=%s",str);
    fclose(fp);
    return 0;
}
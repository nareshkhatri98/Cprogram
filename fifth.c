//read the strimg from the user and stroe it in file
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[20];
    FILE *fp;
    fp=fopen("string.txt","w");
    if(fp==NULL)
    {
        printf("\ncannot open file");
        exit(1);
    }
    printf("enter the string:");
    gets(str);
    fputs(str,fp);
    fclose(fp);
    return 0;
}
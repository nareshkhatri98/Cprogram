/* read a number from the user and print it on console and store on file*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    FILE *fp;
    fp=fopen("test.txt","w");
   printf("enter the number");
   scanf("%d",&n);


   // fscanf(fp,"%d",&n);
   // printf("%d",n);//print on screen

    
fprintf(fp,"%d",n);
printf("%d",n);
    fclose(fp);
    return 0;
}
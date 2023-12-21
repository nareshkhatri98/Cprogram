//read the number from user and another from file and find sum.(fscanf())
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num1,num2,sum;
    FILE *fp;
    fp=fopen("test.txt","r");
    if(fp==NULL)
    {
        printf("\n cannot open a file");
        exit(1);
    }
    printf("enter the number:");
    scanf("%d",&num1);//read  from the user

    fscanf(fp,"%d",&num2);//read from the file
    sum=num1+num2;
    printf("%d",sum);
    return 0;

}
#include<stdio.h>
#include<string.h>

// wap to input of 10 students from BCA faculties and sort these asscending order in their name.
int main()
{
    int i,j,n=10;
    char fname[10][20];
    char temp[10];

    printf("enter the list of  10 students names\n:");

    for(i=0;i<n;i++)
    {
        scanf("%s", fname[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(strcmp(fname[j],fname[j+1])>0)
            {

                strcpy(temp,fname[j]);
                strcpy(fname[j],fname[j+1]);
                strcpy(fname[j+1],temp);
            }
        }
    }
    printf("asscending order is:\n");
    for(i=0;i<n;i++)
    {
        printf("%s\n",fname[i]);
    }
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct student {
        int roll;
        char name[20];
        char address[30];
        float marks;
    };
    struct student s[100];
    int i,count;
    for(i=0;i<3;i++)
    {
        printf("enter roll:");
        scanf("%d",&s[i].roll);
        printf("enter name:");
        scanf("%s",&s[i].name);
        printf("enter address:");
        scanf("%s",&s[i].address);
        printf("enter marks:");
        scanf("%f",&s[i].marks);
    }
    printf("\n Name\t roll\t address\t marks");
    for(i=0;i<3;i++)
    {
        if(s[i].marks>250)
        {
          printf("\n%s\t%d\t%s\t%f",s[i].name,s[i].roll,s[i].address,s[i].marks);
        }
    }
    return 0;
}
    

    
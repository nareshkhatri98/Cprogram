#include<stdio.h>
struct student
{
  int roll;
  char name[90];
  float marks;

}
void display( struct student);
int main()
{
    struct student s;
    printf("enter roll: ");
    scanf("%d",&s.roll);
    printf("enter name: ");
    scanf("%s",&s.name);
    printf("enter marks: ");
    scanf("%f",&s.marks);
    display(s);
    return 0;
    
}
void display( struct student s)
{
  printf("roll=%d",s.roll);
  printf("roll=%s",s.name);
  printf("roll=%f",s.marks);
}
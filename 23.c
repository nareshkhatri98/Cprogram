#include<stdio.h>
#include<string.h>
//wap to concate two string
int main()
{
  char fname[10];
  char lname[10];
 
  printf("enter your first name:");
  gets(fname);
  printf("enter youyr last name:");
  gets(lname);
  
  printf("concate=%s",strcat(fname,lname));

return 0;

}
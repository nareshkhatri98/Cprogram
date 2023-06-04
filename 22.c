#include<stdio.h>
#include<string.h>

int main()
{ // wap to take input of one string and covert in into lower case
   char string[100];
   printf("enter the string in upper case:");
   gets(string);

   strlwr(string);
   printf("lower case :%s",string);

    return  0;
}


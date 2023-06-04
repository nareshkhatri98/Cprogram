#include<Stdio.h>
 int even_odd(int);
int main()
{ // wap to determine the given number is wheter even or odd by using return type function with parameter.
  int n,flag=0;

  printf("enter any number:");
  scanf("%d",&n);
  flag=even_odd(n);
  if(flag==0)
  {
      printf("even");
  }
  else{
      printf("odd");
  }
  return 0;
}

  int even_odd(int n)
  {
      if(n%2==0)
      {
          return 0;
      }
      else
      {
          return 1;
      }
  }
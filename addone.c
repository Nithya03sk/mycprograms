#include<stdio.h>

int input(int a)
{
    
  printf("enter a nor\n");
  scanf("%d", &a);
  return a;
}
int add(int a,int b)
{   
    b=a+1;
    return b;
}
int output(int a,int b)
{
  
  printf("%d+1 is %d",a,b);
  return b;
}
void main()
{
    int a,b;
a=input(a);
b=add(a,b);
output(a,b);
}

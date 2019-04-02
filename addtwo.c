#include<stdio.h>
int add(int a,int b)
{
return a+b;
}
void main()
{
int a,b;
printf("enter a");
scanf("%d",&a);
printf("enter b");
scanf("%d",&b);
add(a,b);
printf("%d+%d is %d",a,b,a+b);
}

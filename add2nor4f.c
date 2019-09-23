#include<stdio.h>
int input()
{
        int a;
        printf("enter a number\n");
        scanf("%d",&a);
        return a;
}
int add(int a,int b)
{
        int c;
        c=a+b;
        return c;
}
void output(int a,int b,int c)
{
        printf("addition of %d and %d is %d",a,b,c);
}
void main()
{
        int a,b,c;
        a=input();
        b=input();
        c=add(a,b);
        output(a,b,c);
}

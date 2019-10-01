#include<stdio.h>
int input()
{
    int a;
    printf("enter a nor\n");
    scanf("%d",&a);
    return a;
}
int min(int a,int b,int c)
{
    if(a<b&&a<c)
     return a;
    else if(b<c)
    return b;
    else
    return c;
}
void output(int m)
{
    printf("%d is minimum",m);
}
void main()
{
    int a,b,c,m;
    a=input();
    b=input();
    c=input();
    m=min(a,b,c);
    output(m);
}

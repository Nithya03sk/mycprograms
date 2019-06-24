#include<stdio.h>
int input1(int n1)
{
    printf("enter n1\n");
    scanf("%d",&n1);
    return n1;
}
    int input2(int d1)
    {
     printf("enter d1\n");
    scanf("%d",&d1);
    return d1;
    }
    int input3(int n2)
    {
    printf("enter n2\n");
    scanf("%d",&n2);
    return n2;
    }
    
    
    int input4(int d2)
    {
    printf("enter  d2\n");
    scanf("%d",&d2);
    return d2;
}
int lcm(int d1,int d2)
{
    int temp=1;
    if(temp%d1==0&&temp%d2==0)
        return temp;
    temp++;
    lcm(d1,d2);
    return temp;
}
int add(int n1,int n2,int d1,int d2)
{
    int l,num;
    n1=n1*(l/d1);
    n2=n2*(l/d2);
    num=n1+n2;
    return num;
}
void output(int num,int l)
{
    printf("sum of fraction is\n");
    printf("%d/%d",num,l);
}
void main()
{
    int n1,n2,d1,d2,num,l;
 n1=input1(n1);
 d1=input2(d1);
 n2=input3(n2);
 d2=input4(d2);
 temp= lcm(d1,d2);
 num=add(n1,n2,d1,d2);
 output(num,l);
}

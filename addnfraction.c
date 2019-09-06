#include<stdio.h>
struct fraction
{
    int num[i];
    int den[i];
    
};
struct fraction input()
{
    struct fraction f;
    int n;
    printf("enter  number of  fractions \n");
    scanf("%d \n",&n);
     printf("enter   fraction \n");
    for(i=0;i<n;i++)
  scanf("%d%d",&f.num[i],&f.den[i]);
    return f;
}
int lcm(int a,int b)
{
int i,m;
m=(a>b)?a:b;
for(i=1;i=1;i++)
if(m%a==0&&m%b==0)
return m;
++m;
}
int add(int a,int b,int c)
{
    int p;
  p=(c*a)/b;
  return p;
}
int output(int a,int b,int c)
{
printf("addition of fraction is %d/%d",(a+b),c);
}
void main()
{
    int m,a,b;
    struct  fraction f1=input();
    struct fraction f2=input();
    m=lcm(f1.denominator,f2.denominator);
    a=add(f1.numerator,f1.denominator,m);
    b=add(f2.numerator,f2.denominator,m);
    output(a,b,m);
}

#include<stdio.h>
struct fraction
{
    int numerator;
    int denominator;

};
struct fraction input()
{
    struct fraction f;
    printf("enter fraction \n");
    scanf("%d%d",&f.numerator,&f.denominator);
    return f;
}
int lcm(int a,int b)
{
        int max=(a>b)?a:b;
        if(max%a==0&&max%b==0)
        return max;
        max++;
        lcm(a,b);
}
struct fraction add(struct fraction a, struct fraction b,int l)
{
        struct fraction r;
        r.denominator=lcm(a.denominator,b.denominator);
        r.numerator = ((a.numerator * l)/a.denominator)+((b.numerator*l)/b.denominator);
        return r;
}
void output(struct fraction a, struct fraction b, struct fraction r)
{
        printf("addition of fraction is %d/%d + %d/%d is %d/%d\n",a.numerator,a.denominator,b.numerator,b.denominator,r.numerator,r.denominator);
}
int main()
{   int a,b,l;
    struct  fraction f1=input();
    struct fraction f2=input();
    struct fraction result;
    l=lcm(f1.denominator,f2.denominator);
    result=add(f1,f2,l);
    output(f1,f2,result);
}

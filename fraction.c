#include<stdio.h>
void input(int *num,int *den)

{   
     printf("enter numerator\n");
     scanf("%d",num);
     printf("enter denominator\n");
     scanf("%d",den);
}

int lcm(int d1,int d2)

{
    static int temp=1;
    if(temp%d1==0&&temp%d2==0)

        return temp;

    temp++;

    lcm(d1,d2);

    return temp;

}

int add(int n1,int n2,int d1,int d2)

{

    int temp,num;

    n1=n1*(temp/d1);

    n2=n2*(temp/d2);

    num=n1+n2;

    return num;

}

void output(int num,int temp)

{

    printf("sum of fraction is\n");

    printf("%d/%d",num,temp);

}

void main()

{

    int n1,n2,d1,d2,num,temp;
    printf("enter fraction 1\n");
    input(&n1,&d1);
    printf("enter fraction 2\n");
    input(&n2,&d2);
    temp= lcm(d1,d2);

    num=add(n1,n2,d1,d2);

    output(num,temp);

}

#include<stdio.h>
int input()
{
	int a;
	printf("enter the value\n");
	scanf("%d",&a);
	return a;
}
int compute(int a,int b,int c)
{   int m;
   m=a>b?(a>c?a:c):(b>c?b:c);
   return m;
}
void output(int m)
{
    printf("largest of three numbers is %d\n",m);
}
void main()
{
    int a,b,c,m;
    a=input();
    b=input();
    c=input();
    m=compute(a,b,c);
    output(m);
    
}

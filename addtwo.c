//pass by value
#include<stdio.h>
int add(int a,int b)
{
  return a+b;
}
void main()
{
  int a,b,sum=0;
  printf("enter a");
  scanf("%d",&a);
  printf("enter b");
  scanf("%d",&b);
  sum=add(a,b);
  printf("sum is %d",sum);
}

//pass by reference
#include<stdio.h>
#include<conio.h>
int add(int *a,int *b)
{
       return *a+*b;
}
void main()
{
	int a,b,sum=0;
	clrscr();
	printf("enter a and b\n");
	scanf("%d%d",&a,&b);
	sum=add(&a,&b);
	printf("sum is %d",sum);
	getch();
}



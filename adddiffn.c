#include<stdio.h>
#include<conio.h>
int add(int n,int a[10])
{
	int sum,i;
	for(i=0;i<n;i++)
	sum=sum+a[i];
	return sum;
}
void main()
{
	int n,a[10],sum=0,i;
	printf("enter n\n");
	scanf("%d",&n);
	printf("enter elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
    sum=add(n,a);
	printf("sum is %d",sum);
}

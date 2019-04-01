#include <stdio.h>
void addn(int n,int *sum)
{
    int i;
    for(i=0;i<=n;i++)
    *sum=*sum+i;
    
}
void main()
{
    int n,sum=0;
    printf("enter n\n");
    scanf("%d",&n);
    addn(n,&sum);
    printf("sum is %d\n",sum);
}
//when you are doing by call by value, value will change in called function (addn) but not in calling function(main).
//so use call by reference (passing address not a value)

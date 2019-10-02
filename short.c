#include<stdio.h>
#include<math.h>
struct point
{
        float x;
        float y;
};
struct point input()
{
        struct point p;
        printf("enter x and y co-ordinates of a point\n");
        scanf("%f%f",&p.x,&p.y);
        return p;
}
int compute(struct point p1,struct point p2)
{
        float r;
        r=sqrt((p2.x-p1.x)*(p2.x-p1.x)+(p2.y-p1.y)*(p2.y-p1.y));
        return r;
}
void output(struct point p1,struct point p2,float r)
{
        printf("distance between %f,%f and %f,%f is %f\n",p1.x,p1.y,p2.x,p2.y,r);
}
int main()
{
        float r;
        struct point p1=input();
        struct point p2=input();
        r=compute(p1,p2);
        output(p1,p2,r);
        return 0;
}

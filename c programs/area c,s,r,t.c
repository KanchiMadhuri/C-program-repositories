#include<stdio.h>
int main()
{
    int a,b;
    float c,s,r,t;
    printf("enter a,b values:");
    scanf("%d%d",&a,&b);
    c=3.14*a*a;
    s=a*a;
    r=a*b;
    t=(a*b)/2;
    printf("area of circle is%.1f\n area of square is%.1f\n area of rectangle is%.1f\n area of triangle is%.1f",c,s,r,t);
}

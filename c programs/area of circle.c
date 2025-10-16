#include<stdio.h>
#define pi=3.14
int main()
{
	float radius,area;
	printf("enter radius of circle(in cm):");
	scanf("%f",&radius);
	area=pi*radius*radius;
	printf("area of circle=%.2fcm\n",area);
	return 0;
}

#include<stdio.h>
void main()
{
	float u,a,t,s;
	printf("enter u,a,t values");
	scanf("%f%f%f",&u,&a,&t);
	s=u*t+(a*t*t)/2;
	printf("s=%f",s);
}

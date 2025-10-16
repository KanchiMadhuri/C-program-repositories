#include<stdio.h>
void main()
{
	float fahrenheit, celsius;
	printf("enter fahrenheit value");
	scanf("%f",&fahrenheit);
	celsius=(fahrenheit-32)*5/9;
	printf("\n celsius=%f",celsius);
}

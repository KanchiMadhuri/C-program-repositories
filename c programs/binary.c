#include<stdio.h>
int main()
{
	int a[10],i,x,found=0,l,h,mid,index=0;
	printf("enter 10 values to array in sort order");
	for(i=0;i<10;i++)
	scanf("%d",&x);
	l=0;
	h=10-1;
	while(l<=h)
	{
		mid=(l+h)/2;
		index=mid;
		if(x<a[mid])
		h=mid-1;
		else if(x>a[mid])
		l=mid=1;
		else
		if(x==a[mid])
		{
			found=1;
			break;
		}
	}
	if (found==1)
	printf("%d element found at index %d",x,index);
	else
	printf("not found");
}

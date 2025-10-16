#include<stdio.h>
int main()
{
	int a[10],i,key,found=0;
	printf("enter 10 values to array aa:\n");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	printf("enter element to be search;\n");
	scanf("%d",&key);
	for(i=0;i<10;i++)
	{
		if(a[i]==key)
		{
			found=1;
			break;
		}
	}
	if(found==0)
	printf("\t element not found");
	else
	printf("\t element found");
}

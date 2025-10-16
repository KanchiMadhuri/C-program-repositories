#include<stdio.h>
int main()
{
    int arr[5],i;
    int sum=0;
    float average;
    printf("enter 5 elements:\n");
    for(i=0;i<5;i++)
    {
        printf("element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        sum+=arr[i];
    }
    average=(float)sum/5;
    printf("sum of elements:%d\n",sum);
    printf("average of elements:%.2f\n",average);
}

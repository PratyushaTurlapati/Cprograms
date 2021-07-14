#include<stdio.h>
void replacemin(int *arr,int size)
{
	int i,min=arr[0];
	for(i=1;i<size;i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	for(i=0;i<size;i++)
	{
		arr[i]=min;
	}
}
int main()
{
	int arr[100],i,size;
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	replacemin(arr,size);
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
}

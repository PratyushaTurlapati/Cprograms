#include<stdio.h>
void replacewithfirstodd(int *arr,int size)
{
	int i,odd;
	for(i=0;i<size;i++)
	{
		if(arr[i]%2!=0)
		{
			odd=arr[i];
			break;
		}
	}
	
	for(i=0;i<size;i++)
	{
		arr[i]=odd;
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
	replacewithfirstodd(arr,size);
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
}

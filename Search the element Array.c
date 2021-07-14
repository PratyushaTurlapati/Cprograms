#include<stdio.h>
int search(int *arr,int size,int key)
{
	int i;
	for(i=1;i<size;i++)
	{
		if(arr[i]==key)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int arr[100],i,size,key;
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&key);
	if(search(arr,size,key))
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	
}

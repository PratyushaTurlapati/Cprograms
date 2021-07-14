#include<stdio.h>
int countzeros(int **arr,int size)
{
	int i,zc=1;
	for(i=0;i<size;i++)
	{
		if(arr[i]==0)
		{
			zc++;
		}
	}
	return zc;
	
}
int main()
{
	int arr[100],i,size;
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("%d",countzeros(arr,size));
}

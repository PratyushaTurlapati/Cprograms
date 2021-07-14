#include<stdio.h>
int findMaxindex(int *arr,int size)
{
	int max=arr[0],i,Maxindex=0;
	for(i=1;i<size;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
			Maxindex=i;
		}
	}
	return Maxindex;
}
int main()
{
	int Maxindex,arr[100],i,size;
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	Maxindex=findMaxindex(arr,size);
	printf("%d",Maxindex);
}

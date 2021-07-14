#include<stdio.h>
int findsumarray(int *arr,int size)
{
	int sumarray=0,i;
	for(i=0;i<size;i++)
	{
		sumarray+=arr[i];
	}
	return sumarray;
}
int main()
{
	int sumarray,arr[100],i,size;
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	sumarray=findsumarray(arr,size);
	printf("%d",sumarray);
}

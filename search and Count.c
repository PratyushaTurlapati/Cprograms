#include <stdio.h>
int main()
{
	int arr[100],n,i;
	int num,count;
	scanf("%d",&n);
	for(i=0;i< n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&num);
	count=0;
	for(i=0;i< n;i++)
	{
		if(arr[i]==num)
			count++;
	}
	printf("%d",count);
	return 0;
}

#include<stdio.h>
int main()
{
    int arr[100],size,i,key,index;
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
    scanf("%d",&key);

    for(i = 0; i < size; i++)
    {
        if(arr[i] == key)
        {
            index = i;
            break;
        }
    }

    if(index != -1)
    {
        for(i = index; i < size - 1; i++)
            arr[i] = arr[i+1];
        for(i = 0; i < size - 1; i++)
            printf("%d ",arr[i]);
    }

    return 0;
}

#include <stdio.h>
#include<stdlib.h>
int maxmatrix(int **arr,int r,int c)
{
    int m=0,i,j;
    for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(m<arr[i][j])	
			{
				m=arr[i][j];
			}
		}
	}
	return m;
}
int main()
{
	int i,j,r,c,m,**arr;
	scanf("%d%d",&r,&c);
	arr = (int **)malloc(r * sizeof(int *));
    for (i=0; i<r; i++)
         arr[i] = (int *)malloc(c * sizeof(int));
         
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);	
		}
	}
	m=maxmatrix(arr,r,c);
	printf("%d",m);
	return 0;
}

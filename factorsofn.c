#include<stdio.h>
#include<math.h>
int factorCount(int num)
{
	int i,fc=0;
	
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			fc+=1;
		}
	}
	return fc;
}
int main()
{
	int num;
	scanf("%d",&num);
	printf("%d",factorCount(num));
}

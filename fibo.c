#include<stdio.h>
int fibo(int num)
{
	int a=0,b=1,i,c;
	if(num==0 || num==1)
	{
		return 1;
	}
	printf("%d %d ",a,b);
	for(i=3;i<=num;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d ",c);
	}
	return 0;
}
int main()
{
	int num;
	scanf("%d",&num);
	fibo(num);
	return 0;
}

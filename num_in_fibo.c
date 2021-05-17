#include<stdio.h>
int num_in_fibo(int num)
{
	int a=0,b=1,c,i;
	if(a==num)
	{
		return 1;
	}
	if(b==num)
	{
		return 1;
	}
	while(num>0)
	{
		c=a+b;
		a=b;
		b=c;
		if(c==num)
		{
			return 1;
		}
		if(c>num)
		{
			return 0;
		}
	}
}
int main()
{
	int num;
	scanf("%d",&num);
	num=num_in_fibo(num);
	if(num)
	{
		printf("yes");
	}
	else{
		printf("no");
	}
	return 0;
}

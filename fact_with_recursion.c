#include<stdio.h>
int main()
{
	int n,r;
	scanf("%d",&n);
	r=fact(n);
	printf("%d",r);
	return 0;
}
int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	else{
		return n*fact(n-1);
	}
	return 0;
}

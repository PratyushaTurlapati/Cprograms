#include<stdio.h>
int gcd(int num1,int num2)
{
	if (num2==0)
		return;
  	return gcd(num2,num1%num2);
  	
}
int main()
{
	int num1,num2;
	scanf("%d%d",&num1,&num2);
	printf("%d",gcd(num1,num2));
}

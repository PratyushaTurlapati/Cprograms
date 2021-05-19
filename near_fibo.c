#include<stdio.h>
int near_fibo(int num)
{
	int a=0,b=1,c=0,d;
	if(num==0)
	{
		printf("true");
	}
	while(c<=num)
	{
		c=a+b;
		a=b;
		b=c;
    	if(c==num)
		{
	       printf("true");
	       return;
		}
    	else
     	{
		   d=c;
     	}
    }
	if((num-a)>(d-num))
	{
		printf("%d",d);
	}
	else if((num-a)<(d-num))
	{
		printf("%d",a);
	}
	else
	{
		printf("%d %d",a,d);
	}
}

int main()
{
	int num;
	scanf("%d",&num);
	near_fibo(num);
}

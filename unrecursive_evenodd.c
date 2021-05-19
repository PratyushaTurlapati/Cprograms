#include<stdio.h>
int main()
{
	int n,a;
	scanf("%d",&n);
	a=recursive_evenodd(n);
	printf("%d",a);
	return 0;
}
int recursive_evenodd(int n)
{
	int e,o;
	while(n>1)
	{
		if(n%2==0){
			e=n/2;
			printf("%d",e);
			n=e;
		}
		else{
			o=3*n-1;
			printf("%d",o);
			n=o;
		}
	}
}

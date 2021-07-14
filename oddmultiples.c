#include<stdio.h>
void printTable(int num)
{
	int i;
	for(i=1;i<=20;i++)
	{
		if(i%2!=0)
		{
			printf("%d ",num*i);
		}
		
	}
}
int main()
{
	int num;
	scanf("%d",&num);
	printTable(num);
} 

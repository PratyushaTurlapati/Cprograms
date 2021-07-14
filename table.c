#Program to print the table of N up to 5 multiples
#include<stdio.h>
void printTable(int num)
{
	int i;
	for(i=1;i<=5;i++)
	{
		printf("%d ",num*i);
	}
}
int main()
{
	int num;
	scanf("%d",&num);
	printTable(num);
}

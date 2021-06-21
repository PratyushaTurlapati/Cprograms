input:
5
output:
    1
   22
  333
 4444
55555



#include<stdio.h>
void printPattern(int num)
{
	int i,j;
	for(i=1;i<=num;i++)
	{
	    for(j=1;j<=num-i;j++)
	    {
	        printf(" ");
	    }
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}
int main()
{
	int num;
	scanf("%d",&num);
	printPattern(num);
}

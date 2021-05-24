#include<stdio.h>
int isPronic(n){
	int i;
	for(i=0;i<=n;i++)
   {
       if(i*(i+1)==n)
       {
           return 1;
           break;
       }
   }
   return 0;	
}
int main(){
	int n,x;
	scanf("%d",&n);
	x=isPronic(n);
   	if(x==1)
    	printf("%d is Pronic",n);
   	else
    	printf("%d is not a Pronic",n);
}

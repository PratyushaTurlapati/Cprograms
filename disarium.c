#include<stdio.h>
int isDisarium(int n){
	int i=0,s=0,c=0,r,a;
	a=n;
	while(n>0){
		r=n%10;
		i++;
		n=n/10;		
	}
	n=a;
	while(a>0){
		r=a%10;
		s=s+pow(r,i);
		i--;
		a=a/10;
	}
	if(s=n){
		return 1;
	}
}
int main(){
	int n,m;
	scanf("%d",&n);
	m=isDisarium(n);
	if(m==1){
		printf("%d is disarium num",n);
	}
	else{
		printf("%d is not disarium num",n);
	}
}

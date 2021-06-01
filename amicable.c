#include<stdio.h>
int main(){
    int i,f,s;
    int fsum=0,ssum=0;
    scanf("%d",&f);
    scanf("%d",&s);
    for(i=1;i<f;i++)
    {
        if(f%i==0){
            fsum=fsum+i;
        }
    }
    for(i=1;i<s;i++)
    {
        if(s%i==0){
            ssum=ssum+i;
        }
    }
    if((f==ssum)&&(s==fsum)){
        printf("Amicable Numbers");
    }
    else{
        printf("Not Amicable Numbers");
    }
}


//[1,0,0,0,0,1,0,0],1
#include <stdio.h>
int main(void) {
    int i,j,a[8],b[8];
    for(i=0;i<8;i++){
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    
    int k;
    scanf("%d",&k);
    while(k--){
        for(i=0;i<8;i++){
            if(i==0 || i==7){
                b[i]=0;
            }
            else if(a[i+1]==a[i-1]){
                b[i]=0;
            }
            else{
                b[i]=1;
            }
        }
    }
    for(i=0;i<8;i++){
        printf("%d ",b[i]);
    }
	return 0;
}

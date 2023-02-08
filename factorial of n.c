#include<stdio.h>
int main(){
    int i,n,product=1;
    scanf("%d",&n);
    for(i=n;i>1;i--){
        product=product*1;
        printf("%dX",i);
    }printf("%d=%d",i,product);
    return 0;
}

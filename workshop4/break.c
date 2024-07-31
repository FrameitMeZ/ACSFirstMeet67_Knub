#include <stdio.h>
int main(){
    int x,y=0;
    for(int i = 0 ; i < 10 ; i++){
        scanf("%d",&x);
        y +=x;
        if(x <=0){
            break;
        }
    }
    printf("%d",y);
}
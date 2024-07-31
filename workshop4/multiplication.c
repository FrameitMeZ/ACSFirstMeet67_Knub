#include <stdio.h>
int main(){
    int x,z = 1;
    scanf("%d",&x);
    for(int i = 0 ; i < 12 ; i++){
        printf("%d * %d = %d\n",x,z,x*z);
        z ++;
    }
}
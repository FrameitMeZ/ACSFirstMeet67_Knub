#include <stdio.h>
int main(){
    int x[5],sum = 0;
    for(int i = 0 ; i < 5 ; i++){
        scanf("%d",&x[i]);
        sum += x[i];
    }
    printf("Sum of entered numbers: %d\n",sum);
    printf("Numbers in array: ");
    for(int i = 0 ; i < 5 ; i++){
        printf("%d ",x[i]);
    }
}
#include <stdio.h>
int main(){
    int arr[10],min = 1000000,max = -1000000;
    for(int i = 0 ; i < 10 ; i++){
        scanf("%d",&arr[i]);
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("Maximum number: %d\n",max);
    printf("Minimum number: %d",min);
}
#include <stdio.h>
int main(){
    int a = 0,b = 1,c;
    printf("%d %d ",a,b);
    for(int i = 3; i <= 10; ++i) 
    { 
       c = a + b; 
       a = b; 
       b = c; 
       printf("%d ",c);
    } 
}
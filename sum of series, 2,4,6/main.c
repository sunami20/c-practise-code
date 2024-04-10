#include <stdio.h>
#include <stdlib.h>

int main(){
    int sum=0, i;
    for (i=2; i<=100; i=i+2){
        sum = sum+i;
    }
    printf("all even number (1to100): %d\n", sum);
    return 0;
}

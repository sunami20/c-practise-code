#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf(" 1 to 100 between number:\n");

    for (int i = 2; i <= 100; i++){
        if(isPrime(i)){
            printf(" %d", i);
    }
    }
    printf("\n");
    return 0;

}


int isPrime(int num){
    if (num <= 1){
        return 0;
    }

    for(int i = 2; i <= num/2; i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}

#include <stdio.h>
#include <stdlib.h>
void printNumber(int num);
int main()
{   int a=12;
    printNumber(a);
    return 0;
}
void printNumber(int num){
    printf("The number is %d\n", num);
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, factorial=1;
    printf("Enter Factorial:");
    scanf(" %d", &num);
      while (num>0){
        factorial=factorial*num;
        num--;}
      printf("the factorial is: %d\n", factorial);
    return 0;
}

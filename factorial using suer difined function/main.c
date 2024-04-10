#include <stdio.h>



int factorial(int ami){
     int num=1;
     for (int i=2; i<=ami; i++){
           num= num*i;
     }return num;

     }

int main()
{
    int f;
    printf("Enter your number:");
    scanf("%d",&f);
    printf("the factorial number of %d is %d\n", f, factorial(f));
    return 0;
}

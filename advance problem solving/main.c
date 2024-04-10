#include <stdio.h>
#include <stdlib.h>

int main()
{   int num1, num2;
    printf("Enter your Number 1:");
    scanf("%d", &num1);
    printf("Enter your Number 2:");
    scanf("%d", &num2);

    int gcd=calculateGCD(num1, num2);
    printf("GDC of %d and %d is %d\n", num1, num2, gcd );

    return 0;
}


int calculateGCD(int a, int b) {
    int gcd=1;
    for (int i=1; i<=a && i<=b; i++ ){
        if (a%i==0 && b%i==0){
            gcd=i;


        }
    }

  }


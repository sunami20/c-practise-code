#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num1, num2;
   char ya;
   printf("Enter Number 1:");
   scanf(" %d", &num1);
   printf("The Operator:");
   scanf(" %c", &ya);
   printf("Enter Number 2:");
   scanf("%d", &num2);

   if ( ya=='+'){
     printf(" %d", num1+num2);
   }
      else if ( ya=='-'){
     printf(" %d", num1-num2);
   }
      else if ( ya=='*'){
     printf(" %d", num1*num2);
   }
      else if ( ya=='/'){
     printf(" %d", num1/num2);
   }
    else{
        printf("invalid operator");
    }
    return 0;
}

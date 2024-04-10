#include <stdio.h>
#include <stdlib.h>

int main()
{
 int number[5];
 int i;
 int sum=0;
 int size;
 size= sizeof(number)/sizeof(number[0]);

 for (i=0; i<5; i++){
    printf("Enter your number %d :", i+1);
    scanf("%d", &number[i]);
 }

 for (i=0; i<size; i++){
    sum=sum+number[i];
 }

 printf("The number is %d:", sum);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i;
    printf("Enter Your Number");
    scanf(" %d", &num);
    printf("The table number %d is:\n", num);

    for (i=1; i<=10; i++){
        printf("%d x %d= %d\n", num, i, num*i);
    }
    return 0;
}

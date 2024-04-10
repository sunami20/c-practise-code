#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct student{
    char name[50];
    char department[70];
    int age;
    double height;
};

    struct student information;

    strcpy(information.name,"Sirat Islam");
    strcpy(information.department, "Computer science Engineering") ;
    information.age=20;
    information.height=5;

    printf("name: %s\n", information.name);
    printf("Department: %s\n", information.department);
    printf("Age: %d\n", information.age);
    printf("Height: %.1lf\n", information.height);
    return 0;
}

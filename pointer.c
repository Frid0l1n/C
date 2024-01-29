#include <stdio.h>

void printAge(int *pAge, int age);

int main()
{
    int age = 21;

    int *pAge = NULL;
    pAge = &age;

    printAge(pAge, age);
}

void printAge(int *pAge, int age)
{
    printf("you are %d years old\b\n", *pAge);
    printf("location of age: %p\n", &age);
}
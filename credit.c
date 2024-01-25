#include <stdlib.h>
#include <stdio.h>

void get_digits(int creditcard);

int main(void)
{
    long creditcard;
    printf("Luhns Algorithm \n");
    printf("Enter card number: \n");
    scanf("%ld", &creditcard);
    get_digits(creditcard);
}

void get_digits(int creditcard)
{
    while (creditcard > 0)
    {
    }
}
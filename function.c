#include <stdio.h>

void moin(int n);

int main()
{
    int number;
    printf("Enter number of Hello World\n");
    scanf("%d", &number);
    moin(number);
}

void moin(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Hello World\n");
    }
}

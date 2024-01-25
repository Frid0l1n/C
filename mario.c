#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void pyramid(int n);
void random_pyramid(int n);

int main()
{
    int n;
    // Prompt user for positive integer
    do
    {
        scanf("%d", &n);
    } while (n < 1);

    while (1)
    {
        pyramid(n);
        random_pyramid(n);
    }
}

void pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

void random_pyramid(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            printf("#");
        }
        printf("\n");
    }
}
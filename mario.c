#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int pyramid(int n);

int main(void)
{
    int n;
    // Prompt user for positive integer
    do
    {
        scanf("%d", &n);
    } while (n < 1);

    pyramid(n);
}

int pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }

        // Second loop for printing '#' characters
        for (int j = -1; j < i; j++)
        {
            printf("#");
        }

        printf("\n");
    }
    return 0;
}
#include <stdio.h>

int main(void)
{
    int counter = 3;
    while (counter > 0)
    {
        printf("%d\n", counter);
        counter--;
    }

    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", i);
    }
}
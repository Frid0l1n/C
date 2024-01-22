#include <stdio.h>

int main(void)
{
    int x;
    int y;
    printf("Enter int x:\n");
    scanf("%d", &x);
    printf("Enter int y:\n");
    scanf("%d", &y);
    if (x > y)
    {
        printf("%d is greater than %d \n", x, y);
    }
    else if (y > x)
    {
        printf("%d is greater than %d\n", y, x);
    }
    else
    {
        printf("%d is equal to %d\n", x, y);
    }
}
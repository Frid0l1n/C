#include <stdio.h>

int main(void)
{
    printf("agreement\n");

    char c;
    printf("Do you agree?\n");
    scanf("%s", &c);

    if (c == 'y' || c == 'Y')
    {
        printf("nice\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Noo :(\n");
    }
}
#include <stdio.h>

int main(void) 
{
    int i, j;

    printf("   +");
    for (i = 1; i < 13; ++i) 
    {
        printf("%4d ", i);
    }
    printf("\n");

    for (i = 1; i < 64; ++i) 
    {
        printf("-");
    }
    printf("\n");

    for (i = 1; i < 13; ++i) 
    {
        printf("%2d |", i);

        for (j = 1; j < 13; ++j) 
        {
            printf("%4d ", i * j);
        }
        printf("\n");
    }

    return 0;
}
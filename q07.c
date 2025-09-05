#include <stdlib.h>
#include <stdio.h>

int main(void)
{

    int n[10];
    int c, r;

    for (c = 0; c < 10; c++)
    {
        printf("Digite um numero: ");
        scanf("%i", &n[c]);
    }
    r = n[0];

    for (c = 1; c < 10; c++)
    {
        if (n[c] < r)
        {
            r = n[c];
        }
    }
    printf("O menor elemento: %i", r);
    return 0;
}
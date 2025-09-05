#include <stdlib.h>
#include <stdio.h>

int main(void)
{

    int n[10];
    int c, l;

    for (c = 0; c < 10; c++)
    {
        printf("Digite um numero: ");
        scanf("%i", &n[c]);
    }
    l = n[0];

    for (c = 10; c < 1; c--)
    {
        if (n[c] < l)
        {
            l = n[c];
        }
    }
    printf("O menor elemento: %i", l);
    return 0;
}
#include <stdlib.h>
#include <stdio.h>

int main(void)
{

    int n[10];
    int c, p;
    p = 0;

    for (c = 0; c < 10; c++)
    {
        printf("Digite um numero: ");
        scanf("%i", &n[c]);
        if (n[c] % 2 == 0)
        {
            p++;
        }
    }

    printf("Quantidade de numeros pares: %i", p);

    return 0;
};
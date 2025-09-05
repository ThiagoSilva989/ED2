#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int n[10];
    int c, s, m;
    s = 0;

    for (c = 0; c < 10; c++)
    {
        printf("Digite um numero: ");
        scanf("%i", &n[c]);

        s += n[c];
    }
    m = s / 10;

    printf("a media dos 10 numeros é: %i", m);

    return 0;
}
#include <stdlib.h>
#include <stdio.h>

int s, n1, n2;

int main(void)
{
    printf("Digite dois valores inteiros abaixo\n");
    printf("Digite o primeiro numero: ");
    scanf("%i", &n1);

    printf("Digite o segundo numero: ");
    scanf("%i", &n2);

    s = n1 + n2;

    printf("O valor de %i + %i : %i", n1, n2, s);

    return 0;
}
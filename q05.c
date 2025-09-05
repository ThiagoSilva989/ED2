#include <stdlib.h>
#include <stdio.h>

int n[10];
int c;

int main(void)
{
    for (c = 0; c < 10; c++)
    {
        printf("Digite um numero: ");
        scanf("%i", &n[c]);
    };

    for (c = 9; c >= 0; c--)
    {
        printf("%i\n", n[c]);
    }

    return 0;
};
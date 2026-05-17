#include <stdio.h>
#include <locale.h>

void main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int n1, n2;
    int soma, sub, mult;

    printf("Digite dois valores inteiros:\n");
    scanf("%d %d", &n1, &n2);

    soma = n1 + n2;
    sub = n1 - n2;
    mult = n1 * n2;

    printf("Soma = %d\n", soma);
    printf("Subtracao = %d\n", sub);
    printf("Multiplicacao = %d\n", mult);
}
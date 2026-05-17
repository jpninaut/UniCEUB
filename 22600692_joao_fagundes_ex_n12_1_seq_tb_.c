#include <stdio.h>
#include <locale.h>

void main(void)
{
    setlocale(LC_ALL, "Portuguese");

    float n1, n2;

    printf("Digite dois valores: ");
    scanf("%f %f", &n1, &n2);

    printf("Soma = %.2f\n", n1 + n2);
    printf("Subtracao = %.2f\n", n1 - n2);
}
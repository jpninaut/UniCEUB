#include <stdio.h>
#include <locale.h>

void main(void)
{
    setlocale(LC_ALL, "Portuguese");

    float r, comp;

    printf("Digite o raio: ");
    scanf("%f", &r);

    comp = 2 * 3.14 * r;

    printf("Comprimento = %.2f\n", comp);
}
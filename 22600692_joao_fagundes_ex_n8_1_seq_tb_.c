#include <stdio.h>
#include <locale.h>

void main(void)
{
    setlocale(LC_ALL, "Portuguese");

    float r, h, area;

    printf("Digite o raio e a altura: ");
    scanf("%f %f", &r, &h);

    area = 2 * 3.14 * r * h;

    printf("Area lateral = %.2f\n", area);
}
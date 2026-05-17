#include <stdio.h>
#include <locale.h>

void main(void)
{
    setlocale(LC_ALL, "Portuguese");

    float r, area;

    printf("Digite o raio: ");
    scanf("%f", &r);

    area = 3.14 * r * r;

    printf("Area = %.2f\n", area);
}
#include <stdio.h>
#include <locale.h>

void main(void)
{
    setlocale(LC_ALL, "Portuguese");

    float r, volume;

    printf("Digite o raio: ");
    scanf("%f", &r);

    volume = (4.0/3.0) * 3.14 * r * r * r;

    printf("Volume = %.2f\n", volume);
}
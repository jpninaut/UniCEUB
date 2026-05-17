#include <stdio.h>
#include <locale.h>
void main(void)
{   setlocale(LC_ALL, "Portuguese");
    float f, c;
    int inicio, fim;
    printf("Digite o valor inicial em Fahrenheit: ");
    scanf("%d", &inicio);
    printf("Digite o valor final em Fahrenheit: ");
    scanf("%d", &fim);
    printf("\nCONVERSAO FAHRENHEIT – CELSIUS\n");
    printf("CELSIUS\tFAHRENHEIT\n");
    f = inicio;
    while (f <= fim)
    
	{   c = (5.0 / 9.0) * (f - 32);
        printf("%.2f\t%.2f\n", c, f);
        f++;    }
}
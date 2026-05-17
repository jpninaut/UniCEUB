#include <stdio.h>
#include <locale.h>
void main(void)
{   setlocale(LC_ALL, "Portuguese");
    int num, quantidade = 0;
    float soma = 0;
    printf("Digite numeros (-1 para sair):\n");
    scanf("%d", &num);
    while (num != -1)
    {
        printf("%d, ", num);
        soma += num;
        quantidade++;
        scanf("%d", &num);
    }
    printf("\nQuantidade de numeros: %d\n", quantidade);
    printf("Soma dos valores: %.2f\n", soma);
}
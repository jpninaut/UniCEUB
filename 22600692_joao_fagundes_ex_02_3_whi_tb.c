#include <stdio.h>
#include <locale.h>
void main(void)
{   setlocale(LC_ALL, "Portuguese");
    float nota, soma = 0, media;
    int i = 1;
    while (i <= 4)
    {
        printf("Digite a nota do aluno numero %d: ", i);
        scanf("%f", &nota);

        soma += nota;
        i++;
    }
    media = soma / 4;
    printf("\nMedia da turma = %.2f\n", media);
}
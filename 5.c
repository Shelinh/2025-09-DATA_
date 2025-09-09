// Exercício 5: Média com critério de parada
#include <stdio.h>

int main() {
    float nota, soma = 0;
    int qtd = 0;

    printf("Digite notas (negativo para parar): ");
    scanf("%f", &nota);

    while (nota >= 0) {
        soma += nota;
        qtd++;
        scanf("%f", &nota);
    }

    if (qtd > 0)
        printf("Media = %.2f | Quantidade = %d\n", soma/qtd, qtd);
    else
        printf("Nenhuma nota valida digitada.\n");

    return 0;
}
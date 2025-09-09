// Exercício 10: Caixa registradora
#include <stdio.h>

int main() {
    float preco, total = 0;
    int qtd = 0;

    printf("Digite os precos (0 para terminar):\n");
    scanf("%f", &preco);

    while (preco != 0) {
        if (preco < 0) {
            printf("Preco invalido! Ignorado.\n");
        } else {
            total += preco;
            qtd++;
        }
        scanf("%f", &preco);
    }

    printf("Total = %.2f | Itens = %d\n", total, qtd);
    return 0;
}

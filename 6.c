// Exercício 6: Contagem regressiva segura
#include <stdio.h>

int main() {
    int n;
    printf("Digite um numero positivo: ");
    scanf("%d", &n);

    while (n <= 0) {
        printf("Valor invalido! Digite um numero positivo: ");
        scanf("%d", &n);
    }

    while (n >= 0) {
        printf("%d\n", n);
        n--;
    }
    printf("FIM!\n");

    return 0;
}
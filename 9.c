// Exercício 9: Múltiplos dentro de um intervalo
#include <stdio.h>

int main() {
    int inicio, fim, k;
    printf("Digite inicio, fim e k: ");
    scanf("%d %d %d", &inicio, &fim, &k);

    if (k == 0) {
        printf("O valor de k nao pode ser zero.\n");
        return 1;
    }

    for (int i = inicio; i <= fim; i++) {
        if (i % k == 0)
            printf("%d ", i);
    }
    printf("\n");

    return 0;
}
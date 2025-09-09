// Exercício 8: Soma de ímpares
#include <stdio.h>

int main() {
    int n, soma = 0;
    printf("Digite N: ");
    scanf("%d", &n);

    for (int i = 1, count = 0; count < n; i += 2, count++) {
        soma += i;
    }

    printf("Soma dos %d primeiros impares = %d\n", n, soma);
    return 0;
}
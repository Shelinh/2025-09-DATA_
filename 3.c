// Exercício 3: Conversor de temperatura
#include <stdio.h>

int main() {
    int n, i;
    float c, f;

    printf("Quantas temperaturas deseja converter? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Digite a temperatura em Celsius: ");
        scanf("%f", &c);
        f = c * 1.8 + 32;
        printf("%.2f °C = %.2f °F\n", c, f);
    }
    return 0;
}
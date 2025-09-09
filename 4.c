// Exercício 4: Validação de idade
#include <stdio.h>

int main() {
    int idade;
    printf("Digite uma idade entre 0 e 120: ");
    scanf("%d", &idade);

    while (idade < 0 || idade > 120) {
        printf("Idade invalida! Digite novamente: ");
        scanf("%d", &idade);
    }
    printf("Idade valida: %d\n", idade);

    return 0;
}
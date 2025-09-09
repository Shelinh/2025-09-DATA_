// Exercício 1: Boas-vindas personalizadas
#include <stdio.h>

int main() {
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
        printf("O numero %d é par.\n", numero);
    else
        printf("O numero %d é impar.\n", numero);

    return 0;
}

// Exercício 2: Soma dos dois
#include <stdio.h>

int main() {
    int a, b;
    printf("Digite dois inteiros: ");
    scanf("%d %d", &a, &b);

    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d - %d = %d\n", a, b, a-b);
    printf("%d * %d = %d\n", a, b, a*b);
    if (b != 0)
        printf("%d / %d = %.2f\n", a, b, (float)a/b);
    else
        printf("Divisao por zero nao permitida.\n");

    return 0;
}

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

// Exercício 7: Menu de opções
#include <stdio.h>

int main() {
    int opcao;
    float num;

    do {
        printf("\nMenu:\n");
        printf("1) Dobrar um numero\n");
        printf("2) Metade de um numero\n");
        printf("0) Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Digite um numero: ");
                scanf("%f", &num);
                printf("Dobro: %.2f\n", num * 2);
                break;
            case 2:
                printf("Digite um numero: ");
                scanf("%f", &num);
                printf("Metade: %.2f\n", num / 2);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while(opcao != 0);

    return 0;
}

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


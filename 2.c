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
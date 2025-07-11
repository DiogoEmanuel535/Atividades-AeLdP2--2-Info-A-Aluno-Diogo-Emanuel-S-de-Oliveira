#include <stdio.h>

int main() {
    float valor1, valor2, valor3, media_aritmetica;

    printf("Insira o valor gasto no mês 1: ");
    scanf("%f", &valor1);
    printf("Insira o valor gasto no mês 2: ");
    scanf("%f", &valor2);
    printf("Insira o valor gasto no mês 3: ");
    scanf("%f", &valor3);

    media_aritmetica = (valor1 + valor2 + valor3) / 3;

    printf("A média gasta com combustível é: %.2f\n", media_aritmetica);
    return 0;
}

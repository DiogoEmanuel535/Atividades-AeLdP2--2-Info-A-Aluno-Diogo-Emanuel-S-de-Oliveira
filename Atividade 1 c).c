#include <stdio.h>

int main() {
    int num1, num2, soma, subtracao, multiplicacao, quociente, resto;
    float divisao;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;
    divisao = (float) num1 / num2;
    quociente = num1 / num2;
    resto = num1 % num2;

    printf("\nResultados:\n");
    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Multiplicação: %d\n", multiplicacao);
    printf("Divisão: %f\n", divisao);
    printf("Quociente inteiro: %d\n", quociente);
    printf("Resto da divisão: %d\n", resto);

    return 0;
}

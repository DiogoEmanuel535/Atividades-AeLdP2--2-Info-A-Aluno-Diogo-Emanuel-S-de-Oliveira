#include <stdio.h>

int main() {
    float n1, n2, n3, n4, media_aritmetica;

    printf("Escreva a nota 1: ");
    scanf("%f", &n1);
    printf("Escreva a nota 2: ");
    scanf("%f", &n2);
    printf("Escreva a nota 3: ");
    scanf("%f", &n3);
    printf("Escreva a nota 4: ");
    scanf("%f", &n4);

    media_aritmetica = (n1 + n2 + n3 + n4) / 4;

    printf("A média aritmética do aluno é: %.2f\n", media_aritmetica);

    return 0;
}

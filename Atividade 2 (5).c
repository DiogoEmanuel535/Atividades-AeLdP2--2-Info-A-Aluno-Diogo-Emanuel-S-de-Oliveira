#include <stdio.h>

int main() {
    float altura, pesoideal;
    const float k = 72.7;
    const int B = 58;

    printf("Insira sua altura: ");
    scanf("%f", &altura);

    pesoideal = (k * altura) - B;
    printf("O peso ideal da Lenda é: %.2f\n", pesoideal);

    return 0;
}

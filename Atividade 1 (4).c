#include <stdio.h>

int main() {
    float altura, peso_ideal;
    const float k = 72.7;
    const int B = 58;

    printf("Insira sua altura: ");
    scanf("%f", &altura);

    peso_ideal = (k * altura) - B;
    printf("O peso ideal da Lenda é: %.2f\n", peso_ideal);

    return 0;
}

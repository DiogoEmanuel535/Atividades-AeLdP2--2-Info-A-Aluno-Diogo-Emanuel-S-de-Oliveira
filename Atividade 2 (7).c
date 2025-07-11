#include <stdio.h>
#include <math.h>

int main() {
    float raio, area, diametro, comprimento;
    const float pi = 3.14;

    printf("Insira o raio da circunferência: ");
    scanf("%f", &raio);

    diametro = raio * 2;
    comprimento = (2 * pi) * raio;
    area = (raio*raio) * pi;

    printf("O comprimento é: %.2f\n", comprimento);
    printf("A área é: %.2f\n", area);
    printf("O diâmetro é: %.2f\n", diametro);

    return 0;
}

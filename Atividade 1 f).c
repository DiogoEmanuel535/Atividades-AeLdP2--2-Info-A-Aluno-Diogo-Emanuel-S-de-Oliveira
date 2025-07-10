#include <stdio.h>

int main() {
    float raio, altura, volume;

    printf("Insira o raio da base: ");
    scanf("%f", &raio);
    printf("Insira a altura da embalagem: ");
    scanf("%f", &altura);

    volume = 3.14159 * raio * raio * altura; 

    printf("O Volume da Lata é: %f\n", volume);
    return 0;
}

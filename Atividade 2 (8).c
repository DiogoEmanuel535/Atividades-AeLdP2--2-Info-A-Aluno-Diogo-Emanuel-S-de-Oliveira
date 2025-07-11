#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Insira a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = celsius * (9.0 / 5.0) + 32.0;

    printf("A temperatura em Fahrenheit é: %.2f\n", fahrenheit);
    return 0;
}

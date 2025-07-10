#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("Insira a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = ((fahrenheit - 32) * 5) / 9;
    printf("A temperatura em Celsius é: %f\n", celsius);
    printf("A temperatura em Fahrenheit é: %f\n", fahrenheit);

    return 0;
}

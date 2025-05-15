#include <stdio.h>

int main() {

    int idade = 25;
    float altura = 1.75;
    double saldoBancario = 12345.67;
    char inicial = 'B';
    char nome[20] = "Bruno";

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("A sua idade é: %d\n", idade);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("A sua altura é: %f\n", altura);
 
    return 0;
}
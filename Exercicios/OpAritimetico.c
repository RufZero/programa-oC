#include <stdio.h>

int main (){

/*
Soma
Subtração
Multiplicação
Divisão

*/

int numero1, numero2;
int soma, subtracao, multiplicacao, divisao;

printf("Entre com o numero 1:");
scanf("%d", &numero1);
printf("Entre com o numero 2:");
scanf("%d", &numero2);

soma = numero1 + numero2; //operação soma

subtracao = numero1 - numero2; //operação subtração

multiplicacao = numero1 * numero2; //operação multiplicação

divisao = numero1 / numero2; //operação divisão

printf("A Soma é: %d\n", soma);
printf("A Subtracao é: %d\n", subtracao);
printf("A Multiplicacao é: %d\n", multiplicacao);
printf("A Divisao é: %d\n", divisao);

return 0;




}
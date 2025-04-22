#include <stdio.h>
#include <stdlib.h>

/*Crie um programa que, utilizando os números 8 e 2 faça e escreva a soma, a subtração, a multiplicação e a divisão destes números.*/

int main()
{
    int a = 8;
    int b = 2;
    int soma, subtracao, multiplicacao, divisao;
    soma = a + b;
    subtracao = a - b;
    multiplicacao = a * b;
    divisao = a / b;

    printf("A soma de %d e %d é: %d\n", a, b, soma);
    printf("A subtração de %d e %d é: %d\n", a, b, subtracao);
    printf("A multiplicação de %d e %d é: %d\n", a, b, multiplicacao);
    printf("A divisão de %d e %d é: %d\n", a, b, divisao);
    return 0;
}
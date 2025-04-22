#include <stdio.h>
#include <stdlib.h>

/*Crie um programa que faça e escreva o módulo dos números 8 e 3.*/

int main()
{
    int a = 8;
    int b = 3;
    int resultado;
    
    resultado = a % b;
    printf("O módulo de %d e %d é: %d\n", a, b, resultado);
    return 0;
}
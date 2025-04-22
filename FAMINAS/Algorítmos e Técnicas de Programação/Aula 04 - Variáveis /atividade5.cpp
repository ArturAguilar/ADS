#include <stdio.h>
#include <stdbool.h>

/*Crie um programa que imprima o valor das variáveis parcela1, parcela2 e parcela3 do tipo bool. Ambas as primeiras são verdadeiras, a terceira é falsa.*/

int main()
{
    // Declaração das variáveis booleanas
    bool parcela1 = true;
    bool parcela2 = true;
    bool parcela3 = false;

    // Imprime os valores das variáveis
    printf("parcela1: %s\n", parcela1 ? "true" : "false");
    printf("parcela2: %s\n", parcela2 ? "true" : "false");
    printf("parcela3: %s\n", parcela3 ? "true" : "false");

    return 0;
}
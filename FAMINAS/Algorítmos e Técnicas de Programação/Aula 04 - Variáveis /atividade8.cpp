#include <stdio.h>
#include <stdlib.h>

/*Crie um programa que guarde o número de parcelas e o valor de cada parcela, depois faça a conta do total a ser pago e imprima na tela. Parcela = 12. Valor mensal = 150.*/

int main()
{
    int parcelas = 12;
    float valorMensal = 150.0;
    float total = parcelas * valorMensal;

    printf("Número de parcelas: %d\n", parcelas);
    printf("Valor mensal: %.2f\n", valorMensal);
    printf("Total a ser pago: %.2f\n", total);
    return 0;
}
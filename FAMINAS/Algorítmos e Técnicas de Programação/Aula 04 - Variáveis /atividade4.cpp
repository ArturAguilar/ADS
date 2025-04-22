#include <stdio.h>
#include <stdlib.h>

/*Rita teve que viajar. No aeroporto pesaram e mediram sua bagagem para saber se ela estava de acordo com as normas. A bagagem pesa 18.3 kg e possui respectivamente 40cm, 17cm, 20cm de altura, largura e profundidade. Guarde estes dados em variáveis e imprima na tela.*/

int main()
{
    float peso = 18.3; // Peso da bagagem em kg
    float altura = 40.0; // Altura da bagagem em cm
    float largura = 17.0; // Largura da bagagem em cm
    float profundidade = 20.0; // Profundidade da bagagem em cm

    printf("========================= DADOS DA BAGAGEM =========================\n");
    // Imprime os dados da bagagem
    printf("Peso da bagagem: %.2f kg\n", peso);
    printf("Dimensões da bagagem: %.2f cm (altura) x %.2f cm (largura) x %.2f cm (profundidade)\n", altura, largura, profundidade);
    printf("--------------------------------------------------------------------\n");
    // Calcula o volume da bagagem
    float volume = altura * largura * profundidade; // Volume em cm³
    printf("Volume da bagagem: %.2f cm³\n", volume);
    printf("====================================================================\n");
    return 0;
}
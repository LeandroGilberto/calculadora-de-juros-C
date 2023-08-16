#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor_final, valor, taxa;
    int tempo;

    printf("informe o valor da prestacao: ");
    scanf("%f", &valor);

    printf("informe a taxa de juros: ");
    scanf("%f", &taxa);

    printf("informe o tem em dias");
    scanf("%d", &tempo);

    valor_final = valor + (valor * (taxa/100)*tempo);

    printf("*/n/n/nA Prestacap a ser pago eh: %.2f", valor_final);
}
